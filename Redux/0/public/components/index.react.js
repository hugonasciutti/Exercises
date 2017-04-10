import React from 'react';
import { Link } from 'react-router';

class Index extends React.Component {

  render() {
    return (
      <div>
        Hi
        <Link to="index">Home</Link>
        <Link to="about">About</Link>
      </div>
    )
  }
}

export default Index
