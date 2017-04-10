import React from 'react';
import { render } from 'react-dom';
import { Provider } from 'react-redux';
import { Route, Router, IndexRoute, hashHistory as history } from 'react-router';
import store from './state/store';

import Layout from './components/Layout.react';
import LandingIndex from './components/LandingIndex.react';
import LandingAbout from './components/LandingAbout.react';

render((
  <Router history={history}>
    <Route path="/" component={Layout} />
    <Route path="/index" component={LandingIndex} />
    <Route path="/about" component={LandingAbout} />
  </Router>
), document.getElementById('root'))
