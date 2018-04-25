import React, { PureComponent } from 'react'
import { injectIntl } from 'react-intl'
import PropTypes from 'prop-types'
import map from 'lodash/map'
import './style.scss'

@injectIntl
class Radio extends PureComponent {
  render() {
    const { name, className, options, onChange, onClick, disabled, defaultIndex,
      checkedKey, defaultValue, labelKey, valueKey, defaultKey, classKey, intl } = this.props
    const translate = labelKey === 'intl'

    const radios = map(options, (radio, key) => {
      const checked = radio[checkedKey]
      const defaultChecked = radio[defaultKey]
      const label = translate ? intl.formatMessage({ id: radio[labelKey] }) : radio[labelKey]
      const value = radio[valueKey]
      const radioClass = radio[classKey] || ''

      return (
        <div className={`rw-radio ${radioClass}`} key={`radio-${value}`}>
          <label>
            <input
              name={name}
              type="radio"
              value={value}
              onChange={onChange}
              onClick={onClick}
              checked={checked}
              defaultChecked={defaultChecked || value === defaultValue || key === defaultIndex}
              disabled={radio.disabled || disabled}
            />
            <span className="space">{label}</span>
          </label>
        </div >
      )
    })

    return (
      <div className={className} >
        {radios}
      </div>
    )
  }
}

Radio.propTypes = {
  checkedKey: PropTypes.any,
  className: PropTypes.string,
  intl: PropTypes.object,
  defaultKey: PropTypes.string,
  defaultIndex: PropTypes.number,
  classKey: PropTypes.string,
  disabled: PropTypes.any,
  labelKey: PropTypes.string,
  defaultValue: PropTypes.oneOfType([PropTypes.string, PropTypes.number]),
  name: PropTypes.string,
  onChange: PropTypes.func,
  onClick: PropTypes.func,
  options: PropTypes.array,
  valueKey: PropTypes.string
}

Radio.defaultProps = {
  intl: {},
  checked: undefined,
  defaultIndex: undefined,
  checkedKey: undefined,
  classKey: '',
  className: '',
  defaultKey: 'default',
  disabled: undefined,
  labelKey: 'name',
  name: 'radio[]',
  onChange: () => null,
  defaultValue: undefined,
  onClick: undefined,
  options: [{ name: 'nameDefault', value: 1, default: true }],
  valueKey: 'value'
}

export default Radio
