import React from 'react'
import { observer } from 'mobx-react'

@observer

export default class TodoList extends React.Component {
  render() {
    return <h1>{this.props.store.todos[0]}</h1>
  }
}
