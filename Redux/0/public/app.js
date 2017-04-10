import React from 'react';
import { render } from 'react-dom';
import { Provider } from 'react-redux';
import { Route, Router, IndexRoute, hashHistory as history } from 'react-router';
import store from './state/store';
import routes from './router';
import RenderRoutes from './components/RenderRoutes';


render((
  <Provider store={store}>
    <Router history={history}>
      <RenderRoutes routes={routes} />
    </Router>
  </Provider>
), document.getElementById('root'))
