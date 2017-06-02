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
        {items.map((item, index) => <h2 key={`item-${index + 1}-index`}>{item}</h2>)}
      </div>
    );
  }
}

export default Index;
