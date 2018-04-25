import React from 'react'
import { shallow } from 'enzyme'
import moment from 'core/utils/moment'
import { buildEvent } from 'core/unit-test/utils'
import '../../../../unit-test/fixture/datepicker'
import { Date } from '../'

describe.skip('Date Component', () => {
  it('should render', () => {
    const isoDate = moment().toISOString()
    const component = shallow(<Date value={isoDate} onChange={jest.fn()} />)

    expect(component).toMatchSnapshot()
  })

  it('should render and replace date format', () => {
    const isoDate = moment().toISOString()
    const component = shallow(<Date value={isoDate} onChange={jest.fn()} dateFormat="MM/DD/Y" />)

    expect(component).toMatchSnapshot()
  })

  it('should render with placeholder', () => {
    const isoDate = moment().toISOString()
    const component = shallow(<Date value={isoDate} onChange={jest.fn()} placeholder="Date" />)

    expect(component).toMatchSnapshot()
  })

  it('should change date', () => {
    const date = moment()
    const onChange = jest.fn()
    const component = shallow(<Date value={undefined} onChange={onChange} />)

    component.simulate('change', date)

    expect(onChange).toHaveBeenCalledWith(date.toISOString())
  })

  it('should change empty date', () => {
    const onChange = jest.fn()
    const component = shallow(<Date value={undefined} onChange={onChange} />)

    component.simulate('change', '')

    expect(onChange).toHaveBeenCalledWith('')
  })

  it('should blur date', () => {
    const invalidDate = '16/03/199222'
    const onChange = jest.fn()
    const component = shallow(<Date value={undefined} onChange={onChange} />)

    component.simulate('blur', buildEvent(invalidDate))

    expect(onChange).toHaveBeenCalledWith('')
  })
})
