/* eslint react/no-multi-comp: off */
import React, { Component } from 'react'
import PropTypes from 'prop-types'
import MaskedInput from 'react-text-mask'
import { handlerOnChange } from '../utils'
import FieldHoc from '../FieldHoc'
import masks from './masks'

class Mask extends Component {

  onChange(event) {
    handlerOnChange(this.formatEventValue(event), this.props)
  }

  formatEventValue(event) {
    const { name, formatter } = this.props
    const eventValue = event.target.value
    const value = formatter ? formatter(eventValue) : eventValue

    return { ...event, target: { ...event.target, name, value } }
  }

  render() {
    const { name, value, placeholder, mask, className } = this.props

    return (
      <MaskedInput
        className={`form-control ${className}`}
        name={name}
        mask={mask}
        value={value}
        placeholder={placeholder}
        onChange={event => this.onChange(event)}
      />
    )
  }
}

class MaskRemap extends Component {

  componentWillMount() {
    this.MaskComponent = FieldHoc(Mask)
  }

  render() {
    return <this.MaskComponent {...this.props} {...masks[this.props.mask]} />
  }
}

Mask.defaultProps = {
  className: ''
}

Mask.propTypes = {
  name: PropTypes.string,
  mask: PropTypes.array.isRequired,
  value: PropTypes.oneOfType([PropTypes.string, PropTypes.number]),
  formatter: PropTypes.func,
  placeholder: PropTypes.string,
  className: PropTypes.string
}

MaskRemap.propTypes = {
  mask: PropTypes.string.isRequired
}

export { Mask }
export default MaskRemap
