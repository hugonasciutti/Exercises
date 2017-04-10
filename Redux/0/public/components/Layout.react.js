import React from 'react';
import { Link } from 'react-router';

class Layout extends React.Component {

  render() {
    return (
      <div>
        <ul>
          <li><Link to="/">/</Link></li>
          <li><Link to="index">Index</Link></li>
          <li><Link to="about">About</Link></li>
        </ul>
        <h1 className="h1Header">React + Redux + Router</h1>
        {this.props.children}
      </div>
    )
  }
}

export default Layout
