import React, { PropTypes } from 'react';
import { connect } from 'react-redux';
import { Link } from 'react-router';
import { Count } from '../actions/Count'

class _Index extends React.Component {
  constructor(props) {
    super(props);
  }

  click() {
    this.props.testClick();
  }

  render() {
    return (
      <div>
        <h3>Index</h3>
        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
        <h5>{this.props.h1}</h5>
        <p>Counter: {this.props.homeReducer.count}</p>
        <button onClick={this.click.bind(this)}>Click me!</button>
      </div>
    )
  }
}

const mapDispatchToProps = (dispatch) => {
  return {
    testClick: () => dispatch(Count("Count"))
  }
}

const mapStateToProps = state => ({
  homeReducer: state.homeReducer
})

const Index = connect(mapStateToProps, mapDispatchToProps)(_Index)

export default Index
