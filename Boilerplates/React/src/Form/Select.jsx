import React, { Component } from 'react'
import PropTypes from 'prop-types'
import map from 'lodash/map'
import { injectIntl } from 'react-intl'
import { handlerOnChange } from './utils'
import FieldHoc from './FieldHoc'

class Select extends Component {

  renderOptions(option, key, intl) {
    const { valueKey, labelKey } = this.props
    const name = labelKey === 'intl'
                 ? intl.formatMessage({ id: option[labelKey] })
                 : option[labelKey]
    return (
      <option key={key} value={option[valueKey]}>
        {name}
      </option>
    )
  }

  render() {
    const { value, options, name, blankOption, placeholder,
            className, intl, required, defaultValue, disabled, children } = this.props
    const blankMessage = placeholder || 'form.select'
    const classSelect = `${className} form-control`

    return (
      <select
        name={name}
        value={value}
        onChange={event => handlerOnChange(event, this.props)}
        className={classSelect}
        required={required}
        defaultValue={defaultValue}
        disabled={disabled}
      >
        {blankOption && <option value="">{intl.formatMessage({ id: blankMessage })}</option>}
        {map(options, (option, key) => this.renderOptions(option, key, intl))}
        {children}
      </select>
    )
  }
}

Select.propTypes = {
  blankOption: PropTypes.bool,
  className: PropTypes.string,
  defaultValue: PropTypes.any,
  intl: PropTypes.object,
  labelKey: PropTypes.string,
  name: PropTypes.string,
  options: PropTypes.array,
  placeholder: PropTypes.string,
  required: PropTypes.any,
  value: PropTypes.oneOfType([PropTypes.string, PropTypes.number]),
  disabled: PropTypes.bool,
  valueKey: PropTypes.string,
  children: PropTypes.node
}

Select.defaultProps = {
  intl: {},
  valueKey: 'id',
  defaultValue: undefined,
  name: undefined,
  required: false,
  value: undefined,
  placeholder: '',
  labelKey: 'name',
  className: '',
  blankOption: false,
  disabled: false,
  children: undefined
}

export { Select }
export default FieldHoc(injectIntl(Select))
