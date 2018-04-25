import React, { Component } from 'react'
import PropTypes from 'prop-types'
import DatePicker from 'react-datepicker'
import 'react-datepicker/dist/react-datepicker.css'
import moment from 'core/utils/moment'
import get from 'lodash/get'
import isEmpty from 'lodash/isEmpty'
import { Translate } from 'core/components'
import { isValidDate } from '../utils'
import FieldHOC from '../FieldHoc'
import './date-period.scss'

class DatePeriod extends Component {
  onChangeValue(startDate, endDate) {
    const { onChange } = this.props

    startDate = isEmpty(startDate) ? '' : startDate.toISOString()
    endDate = isEmpty(endDate) ? '' : endDate.toISOString()

    onChange({ startDate, endDate })
  }

  getDateValue(dtProp) {
    const { value } = this.props
    const formatISO = moment.ISO_8601
    const dateStr = get(value, dtProp)

    return isValidDate(dateStr, formatISO) ? moment(dateStr, formatISO) : undefined
  }

  getValue() {
    const startDate = this.getDateValue('startDate')
    const endDate = this.getDateValue('endDate')

    return { startDate, endDate }
  }

  render() {
    const value = this.getValue()
    const { name, dateFormat, required } = this.props

    return (
      <div className="rw-date-period d-flex flex-row">
        <DatePicker
          className="rw-date-period-first form-control"
          name={name}
          selected={value.startDate}
          selectsStart
          startDate={value.startDate}
          endDate={value.endDate}
          onChange={date => this.onChangeValue(date, value.endDate)}
          dateFormat={dateFormat}
          required={required}
        />
        <span className="rw-date-period-separator d-flex align-items-center px-2">
          <Translate id="component.date.period.separator" />
        </span>
        <DatePicker
          className="rw-date-period-last form-control"
          selected={value.endDate}
          selectsEnd
          startDate={value.startDate}
          endDate={value.endDate}
          minDate={value.startDate}
          onChange={date => this.onChangeValue(value.startDate, date)}
          dateFormat={dateFormat}
          disabled={!value.startDate}
          required={required}
        />
      </div>
    )
  }
}

DatePeriod.defaultProps = {
  dateFormat: moment.localeData().longDateFormat('L'),
  required: false
}

DatePeriod.propTypes = {
  name: PropTypes.string,
  value: PropTypes.shape({
    startDate: PropTypes.string,
    endDate: PropTypes.string
  }),
  onChange: PropTypes.func.isRequired,
  dateFormat: PropTypes.string.isRequired,
  required: PropTypes.bool
}

export { DatePeriod }
export default FieldHOC(DatePeriod)
