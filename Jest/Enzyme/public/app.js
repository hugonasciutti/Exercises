import React from 'react';
import { render } from 'react-dom';
import { Route, Router, hashHistory as history } from 'react-router';

import About from './components/About';
import Index from './components/Index';

render((
  <div className="rootApp">
    <Router history={history}>
      <Route path="/" component={Index} />
      <Route path="/index" component={Index} />
      <Route path="/about" component={About} />
    </Router>
  </div>
), document.getElementById('root'));
