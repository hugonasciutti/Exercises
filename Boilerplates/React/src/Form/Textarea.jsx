import React, { Component } from 'react'
import PropTypes from 'prop-types'
import FieldHOC from './FieldHoc'
import { handlerOnChange } from './utils'

import './style.scss'

class Textarea extends Component {

  render() {
    const { value, name, placeholder, required,
            rows, defaultValue, disabled, className } = this.props

    return (
      <textarea
        className={`form-control rw-textarea ${className}`}
        name={name}
        onChange={event => handlerOnChange(event, this.props)}
        placeholder={placeholder}
        required={required}
        rows={rows}
        value={value}
        defaultValue={defaultValue}
        disabled={disabled}
      />
    )
  }
}

Textarea.defaultProps = {
  className: '',
  defaultValue: undefined,
  name: '',
  placeholder: '',
  required: null,
  rows: 2,
  disabled: false,
  value: ''
}

Textarea.propTypes = {
  className: PropTypes.string,
  defaultValue: PropTypes.string,
  name: PropTypes.string,
  placeholder: PropTypes.string,
  required: PropTypes.bool,
  disabled: PropTypes.bool,
  rows: PropTypes.oneOfType([PropTypes.string, PropTypes.number]),
  value: PropTypes.string
}


export { Textarea }
export default FieldHOC(Textarea)
