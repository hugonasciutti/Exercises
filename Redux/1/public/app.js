import React from 'react';
import { render } from 'react-dom';
import { Provider } from 'react-redux';
import { Route, Router, IndexRoute, hashHistory as history } from 'react-router';
import store from './state/store';
import { Link } from 'react-router';
import MuiThemeProvider from 'material-ui/styles/MuiThemeProvider';

import Layout from './components/Layout.react';
import LandingIndex from './components/LandingIndex.react';
import LandingAbout from './components/LandingAbout.react';

render((
  <div className="rootApp">
    <MuiThemeProvider>
      <Provider store={store}>
        <Router history={history}>
          <Route path="/" component={Layout}>
            <IndexRoute component={LandingIndex}></IndexRoute>
            <Route path="/" component={LandingIndex}></Route>
            <Route path="/index" component={LandingIndex}></Route>
            <Route path="/about" component={LandingAbout}></Route>
          </Route>
        </Router>
      </Provider>
    </MuiThemeProvider>
  </div>
), document.getElementById('root'))
