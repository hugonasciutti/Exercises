import React from 'react'
import { shallow } from 'enzyme'
import moment from 'core/utils/moment'
import '../../../../unit-test/fixture/datepicker'
import { DatePeriod } from '../'

describe('Date Period Component', () => {
  it('should render', () => {
    const component = shallow(<DatePeriod value={undefined} onChange={jest.fn()} />)

    expect(component).toMatchSnapshot()
  })

  it('should render and replace date format', () => {
    const component = shallow(<DatePeriod value={undefined} onChange={jest.fn()} dateFormat="MM/DD/Y" />)

    expect(component).toMatchSnapshot()
  })

  it('should change start date', () => {
    const startDate = moment()
    const value = { startDate: startDate.toISOString(), endDate: '' }
    const onChange = jest.fn()
    const component = shallow(<DatePeriod value={value} onChange={onChange} />)

    component.find('.rw-date-period-first').simulate('change', startDate)

    expect(onChange).toHaveBeenCalledWith(value)
  })

  it('should change end date', () => {
    const endDate = moment()
    const value = { startDate: '', endDate: endDate.toISOString() }
    const onChange = jest.fn()
    const component = shallow(<DatePeriod value={value} onChange={onChange} />)

    component.find('.rw-date-period-last').simulate('change', endDate)

    expect(onChange).toHaveBeenCalledWith(value)
  })
})
