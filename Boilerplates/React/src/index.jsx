import React, { Component } from 'react'
import { render } from 'react-dom'
import Form from './Form'

class App extends Component {
  render() {
    return (
      <div>
        <Input />
      </div>
    )
  }
}

render(<App />, document.getElementById('app'))