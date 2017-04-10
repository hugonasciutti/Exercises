import React, { PropTypes } from 'react'
import { Route } from 'react-router-dom'

const RenderRoutes = props => (
  <div>
    {props.routes.map((route, index) => (
      <Route
        key={index}
        path={route.path}
        exact={route.exact}
        strict={route.strict}
        component={route.main}
      />
    ))}
  </div>
)

RenderRoutes.propTypes = {
  routes: PropTypes.array,
}

export default RenderRoutes
