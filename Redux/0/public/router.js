import React from 'react'
import LandingIndex from './components/index.react';
import LandingAbout from './components/about.react';

const routes = [
  {
    path: '/',
    exact: true,
    main: () => <LandingIndex />,
  },
  {
    path: '/index',
    main: () => <LandingIndex />,
  },
  {
    path: '/about',
    main: () => <LandingAbout />,
  }
]

export default routes
