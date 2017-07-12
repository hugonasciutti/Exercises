import React from 'react';
import { shallow } from 'enzyme';
import Index from '../index';

describe('<Index />', () => {
  it('should render <Index /> component', () => {
    const wrapper = shallow(<Index />);
    expect(wrapper).toMatchSnapshot();
  });

  it('Immutable Page\'s Title', () => {
    const wrapper = shallow(<Index />);
    const title = wrapper.find('#title').node.props.children;
    expect(title).toBe('Index Title');
  });
});
