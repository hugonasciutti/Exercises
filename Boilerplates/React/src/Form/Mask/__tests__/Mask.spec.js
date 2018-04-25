import React from 'react'
import { shallow } from 'enzyme'
import { buildEvent } from 'core/unit-test/utils'
import FormsyMask, { Mask } from '../'
import masks from '../masks'

describe('Mask', () => {
  it('should render component', () => {
    const mask = shallow(<Mask value="00:00" placeholder="xx" mask={masks.hour.mask} />)
    expect(mask).toMatchSnapshot()
  })

  it('should handler onChange', () => {
    const onChange = jest.fn()
    const mask = shallow(<Mask mask={masks.hour.mask} onChange={onChange} />)

    mask.simulate('change', buildEvent('00:00'))
    expect(onChange).toHaveBeenCalledWith('00:00')
  })

  it('should handler onChange using formatter', () => {
    const onChange = jest.fn()
    const formatter = hour => hour.replace(':', '')
    const mask = shallow(
      <Mask mask={masks.hour.mask} formatter={formatter} onChange={onChange} />
    )

    mask.simulate('change', buildEvent('00:00'))
    expect(onChange).toHaveBeenCalledWith('0000')
  })

  it('should remap props for formsy standard', () => {
    const mask = shallow(<FormsyMask mask="hour" />)
    expect(mask).toMatchSnapshot()
  })
})
