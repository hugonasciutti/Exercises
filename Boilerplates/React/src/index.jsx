import React, { Component } from 'react'
import { render } from 'react-dom'
import Form from './Form'
import "babel-polyfill"

class App extends Component {
  render() {
    return (
      <div>
        <Form />
      </div>
    )
  }
}

render(<App />, document.getElementById('app'))