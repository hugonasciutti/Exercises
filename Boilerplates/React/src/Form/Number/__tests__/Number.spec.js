import React from 'react'
import { shallow, mount } from 'enzyme'
import { buildEvent } from 'core/unit-test/utils'
import Number from '../'

describe('Number Component', () => {
  it('should render', () => {
    const component = shallow(<Number onChange={jest.fn()} />)

    expect(component).toMatchSnapshot()
  })

  it('should render replace default props', () => {
    const component = shallow(<Number name="a" value={1} placeholder="a" onChange={jest.fn()} required />)

    expect(component).toMatchSnapshot()
  })

  it('should call onChange', () => {
    const onChange = jest.fn()
    const value = 1500.50
    const component = shallow(<Number onChange={onChange} />)

    component.simulate('change', buildEvent('1500.50'))

    expect(onChange).toHaveBeenCalledWith(value)
  })

  it('should clean input value', () => {
    const onChange = jest.fn()
    const component = shallow(<Number value={1} onChange={onChange} />)

    component.simulate('change', buildEvent(''))

    expect(onChange).toHaveBeenCalledWith('')
  })

  it('should enter letters in default regex formart', () => {
    const onChange = jest.fn()
    const value = 1500.50
    const component = shallow(<Number onChange={onChange} />)

    component.simulate('change', buildEvent('15bb00.50a'))

    expect(onChange).toHaveBeenCalledWith(value)
  })

  it('should call format on blur', () => {
    const onChange = jest.fn()
    const component = mount(<Number onChange={onChange} />)

    component.state().value = '1500'
    component.simulate('blur')

    expect(component.state().value).toBe('1,500.00')
  })
})
