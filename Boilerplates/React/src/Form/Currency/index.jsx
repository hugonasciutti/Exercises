import React, { Component } from 'react'
import PropTypes from 'prop-types'

const inScale = (amount, scale) => amount / (10 ** scale)

function repeatZeroes(times) {
  var result = ''
  var i = 0
  for (i = 0; i < times; i++) {
    result += '0'
  }

  return result
}

function removeOccurrences(from, toRemove) {
  toRemove = toRemove.replace(/[\-\[\]\/\{\}\(\)\*\+\?\.\\\^\$\|]/g, '\\$&')
  var re = new RegExp(toRemove, 'g')
  return from.replace(re, '')
}

class SimpleCurrencyInput extends Component {
  componentWillMount() {
    const { currency, value, tabIndex, readOnly } = this.props

    this.setState({
      rawValue: value,
      delimiters: { decimal: ',', thousands: '.'},
      symbol: 'R$',
      tabIndex,
      readOnly
    })
  }

  componentWillReceiveProps(nextProps) {
    if (nextProps.value || nextProps.value === 0) {
      this.setState({ rawValue: nextProps.value })
    }
  }

  onInputType = (event) => {
    const { currency, onChange, precision } = this.props
    const { decimal, thousands } = this.state.delimiters
    var value = event.target.value
    const lastChar = value.length - 1
    if (value[lastChar] === decimal || value[lastChar] === thousands) {
      return
    }
    var rawValue = this.getRawValue(value)
    if (!rawValue) {
      rawValue = 0
    }

    const scale = precision
    const amountFormatted = this.getAmountFormatted(inScale(rawValue, scale), scale)

    onChange(rawValue, { amount: rawValue, scale, currency, amountFormatted })
    this.setState({ rawValue })
  }

  getAmountFormatted(num, scale) {
    return num.toFixed(scale)
  }

  getCulture(currency) {
    return {
      EUR: 'de-DE',
      BRL: 'pt-BR',
      CAD: 'fr-CA',
      USD: 'en-US'
    }[currency]
  }

  getRawValue = (displayedValue) => {
    const { symbol, delimiters } = this.state
    const { decimal, thousands } = delimiters
    var result = displayedValue

    result = removeOccurrences(result, decimal)
    result = removeOccurrences(result, thousands)
    result = removeOccurrences(result, symbol)

    var intValue = parseInt(result)

    return intValue
  }

  formattedRawValue = (rawValue) => {
    const { precision } = this.props
    const { symbol, delimiters } = this.state
    const { decimal, thousands } = delimiters
    const minChars = '0'.length + precision

    var result = ''
    result = '' + rawValue

    if (result.length < minChars) {
      var leftZeroesToAdd = minChars - result.length
      result = '' + repeatZeroes(leftZeroesToAdd) + result
    }

    var beforeSeparator = result.slice(0, result.length - precision)
    var afterSeparator = result.slice(result.length - precision)

    if (beforeSeparator.length > 3) {
      var chars = beforeSeparator.split('').reverse()
      var withDots = ''
      for (var i = chars.length - 1; i >= 0; i--) {
        var char = chars[i]
        var dot = i % 3 === 0 ? decimal : ''
        withDots = '' + withDots + char + dot
      }
      withDots = withDots.substring(0, withDots.length - 1)
      beforeSeparator = withDots
    }
    result = beforeSeparator + thousands + afterSeparator

    if (symbol) {
      result = symbol + ' ' + result
    }

    return result
  }

  render() {
    return (
      <input
        id={this.props.id}
        className={this.props.className}
        onBlur={this.props.onBlur}
        onFocus={this.props.onFocus}
        onChange={this.onInputType}
        disabled={this.props.disabled}
        autoFocus={this.props.autoFocus}
        tabIndex={this.state.tabIndex}
        readOnly={this.state.readOnly}
        value={this.formattedRawValue(this.state.rawValue)}
      />
    )
  }
}

SimpleCurrencyInput.propTypes = {
  id: PropTypes.string,
  autoFocus: PropTypes.bool,
  disabled: PropTypes.bool,
  onChange: PropTypes.func,
  onBlur: PropTypes.func,
  onFocus: PropTypes.func,
  precision: PropTypes.number,
  readOnly: PropTypes.bool,
  tabIndex: PropTypes.number,
  currency: PropTypes.string,
  className: PropTypes.string,
  value: PropTypes.number.isRequired
}

SimpleCurrencyInput.defaultProps = {
  value: 0,
  precision: 2,
  className: '',
  disabled: false,
  autoFocus: false,
  onChange: () => null,
  onBlur: () => null,
  onFocus: () => null
}

export default SimpleCurrencyInput
