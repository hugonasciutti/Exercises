import React from 'react'
import { render } from 'react-dom'
import { Provider } from 'react-redux'
import { ThemeProvider } from 'styled-components'
import theme from 'core/assets/style/theme'
import Routes from './routes'
import store from './store'

const App = (
  <ThemeProvider theme={theme}>
    <Provider store={store}>
      <Routes />
    </Provider>
  </ThemeProvider>
)

render(App, document.getElementById('app'))
