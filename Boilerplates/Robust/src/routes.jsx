import React from 'react'
import { Route, Switch, Redirect } from 'react-router-dom'
import { createBrowserHistory } from 'history'
import { ConnectedRouter } from 'react-router-redux'

import Dashboard from './containers/Dashboard'

const Routes = () => (
  <ConnectedRouter history={createBrowserHistory()}>
    <Switch>
      <Redirect exact path="/" to="/dashboard" />
      <Route path="/dashboard" component={Dashboard} />
    </Switch>
  </ConnectedRouter>
)

export default Routes
