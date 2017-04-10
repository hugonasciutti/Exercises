import React from 'react';
import { render } from 'react-dom';
import { Provider } from 'react-redux';
import { Route, Router, IndexRoute, hashHistory as history } from 'react-router';
import store from './state/store';


render((
  <Provider store={store}>
    <Router history={history}>
      <Route path="/index" component={LandingIndex} />
      <Route path="/about" component={LandingAbout} />
    </Router>
  </Provider>
), document.getElementById('root'))
