import React, { Component } from 'react';

class About extends Component {
  deleteItem(item, position) {
    return item.split(position, 1);
  }
  render() {
    const items = ['one', 'two', 'three'];
    return (
      <div>
        <h1>This is the About Page</h1>
        {items.map(item => item)}
      </div>
    );
  }
}

export default About;
