import React from 'react';
import { Link } from 'react-router';

class Index extends React.Component {

  render() {
    return (
      <div>
        Hi
        <ul>
          <li><Link to="index">Index</Link></li>
          <li><Link to="home">Home</Link></li>
          <li><Link to="about">About</Link></li>
        </ul>
      </div>
    )
  }
}

export default Index
