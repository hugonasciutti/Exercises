import React from 'react'
import ReactDOM from 'react-dom'

import TodoList from './components/TodoList'
import store from './components/TodoStore'

const app = document.getElementById('app')

ReactDOM.render(<TodoList store={store} />, app)
