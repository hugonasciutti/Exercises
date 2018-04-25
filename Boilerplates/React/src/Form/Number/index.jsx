import React, { Component } from 'react'
import PropTypes from 'prop-types'
import isEmpty from 'lodash/isEmpty'
import numbro from 'core/utils/numbro'

class Number extends Component {
  constructor(props) {
    super(props)

    this.state = {
      value: this.getFormatValue(props.value)
    }
    this.onBlur = this.onBlur.bind(this)
  }

  onChangeInput({ value }) {
    const { regexKeydown } = this.props

    value = value.replace(regexKeydown(), '')

    this.setState({ value })

    this.props.onChange(isEmpty(value) ? value : this.getUnformatValue(value))
  }

  onBlur() {
    const { value } = this.state

    !isEmpty(value) && this.setState({ value: this.getFormatValue(value) })
  }

  getFormatValue(value) {
    const { format } = this.props

    return isEmpty(value) ? '' : numbro(value).format(format)
  }

  getUnformatValue(value) {
    return numbro().unformat(this.getFormatValue(value))
  }

  render() {
    const { name, required, placeholder } = this.props
    const { value } = this.state

    return (
      <input
        className="rw-number form-control"
        type="text"
        name={name}
        value={value}
        onChange={({ target }) => this.onChangeInput(target)}
        onBlur={this.onBlur}
        placeholder={placeholder}
        required={required}
      />
    )
  }
}

Number.propTypes = {
  name: PropTypes.string,
  value: PropTypes.oneOfType([
    PropTypes.string,
    PropTypes.number
  ]),
  onChange: PropTypes.func.isRequired,
  placeholder: PropTypes.string,
  required: PropTypes.bool.isRequired,
  format: PropTypes.string.isRequired,
  regexKeydown: PropTypes.func.isRequired
}

Number.defaultProps = {
  required: false,
  format: numbro.cultureData().formats.fullWithTwoDecimalsNoCurrency,
  regexKeydown: () => /[^0-9.,]/g
}

export default Number
