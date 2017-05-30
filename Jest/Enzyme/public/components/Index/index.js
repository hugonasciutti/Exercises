import React, { Component } from 'react';

class Index extends Component {
  deleteItem(item, position) {
    return item.split(position, 1);
  }
  render() {
    const items = ['one', 'two', 'three'];
    return (
      <div>
        <h1>This is the Index Page</h1>
        {items.map(item => item)}
      </div>
    );
  }
}

export default Index;
