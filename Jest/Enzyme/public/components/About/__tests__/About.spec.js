import React from 'react';
import { shallow, mount } from 'enzyme';
import toJson from 'enzyme-to-json';
import About from '../index';

describe('<About />', () => {
  it('should render <About /> component', () => {
    const component = shallow(<About />);
    const tree = toJson(component);
    expect(tree).toMatchSnapshot();
  });

  it('should delete item from array', () => {
    const component = mount(<About />);
    let tree = toJson(component);
    const items = component.find('.item');
    expect(tree).toMatchSnapshot();

    items.at(2).simulate('click');

    tree = toJson(component);
    expect(tree).toMatchSnapshot();
  });
});
