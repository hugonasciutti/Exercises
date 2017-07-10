import React, { Component } from 'react';

class About extends Component {
  constructor(props) {
    super(props);
    this.state = {
      items: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9],
    };
  }
  deleteItem({target}) {
    const int = parseInt(target.innerHTML);
    const index = this.state.items.indexOf(int);
    this.state.items.splice(index, 1)
    return this.setState({ items: this.state.items })
  }
  log(item) {
    return console.log(item);
  }
  render() {
    return (
      <div>
        <h1>This is the About Page</h1>
        {this.state.items.map((item, index) => <h2 className="item" onClick={(event) => this.deleteItem(event)} key={`item-${index + 1}-about`}>{item}</h2>)}
      </div>
    );
  }
}

export default About;
