import PropTypes from 'prop-types'
import React, { Component } from 'react'
import DatePicker from 'react-datepicker'
import 'react-datepicker/dist/react-datepicker.css'
import moment from 'commons-core/utils/moment'
import { isValidDate } from '../utils'
import FieldHOC from '../FieldHoc'

class RWDatePicker extends Component {
  state = {
    date: ''
  }

  componentDidMount() {
    this.setState({ date: this.getValue(this.props.value) })
  }

  componentWillReceiveProps(props) {
    this.setState({ date: this.getValue(props.value) })
  }

  handleDateChange = (date) => {
    const { dateFormat, onChange } = this.props
    const value = date || undefined
    const onChangeValue = isValidDate(value, dateFormat)
      ? moment(value, dateFormat).format(dateFormat)
      : ''
    onChange(onChangeValue)
    this.setState({ date: value })
  }

  getValue = (value) => {
    const { dateFormat } = this.props
    return isValidDate(value, dateFormat) ? moment(value, dateFormat) : undefined
  }

  render() {
    const { name, disabled, minDate, maxDate, required, dateFormat, showMonthDropdown, showYearDropdown, placeholder } = this.props
    const { date } = this.state

    return (
      <DatePicker
        className="form-control"
        name={name}
        selected={this.getValue(date)}
        onBlur={ev => this.handleDateChange(ev.target.value)}
        minDate={minDate}
        maxDate={maxDate}
        dateFormat={dateFormat}
        showMonthDropdown={showMonthDropdown}
        showYearDropdown={showYearDropdown}
        onChange={this.handleDateChange}
        placeholderText={placeholder}
        required={required}
        disabled={disabled}
        fixedHeight
      />
    )
  }
}

RWDatePicker.propTypes = {
  name: PropTypes.string,
  value: PropTypes.string,
  minDate: PropTypes.object,
  maxDate: PropTypes.object,
  disabled: PropTypes.bool,
  onChange: PropTypes.func.isRequired,
  showMonthDropdown: PropTypes.bool.isRequired,
  showYearDropdown: PropTypes.bool.isRequired,
  dateFormat: PropTypes.string.isRequired,
  placeholder: PropTypes.string,
  required: PropTypes.bool
}

RWDatePicker.defaultProps = {
  showMonthDropdown: false,
  showYearDropdown: false,
  disabled: false,
  name: undefined,
  value: undefined,
  minDate: undefined,
  maxDate: undefined,
  dateFormat: 'DD/MM/YYYY',
  placeholder: 'DD/MM/YYYY',
  required: false
}

export default FieldHOC(RWDatePicker)
