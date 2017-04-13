import React from 'react';

const routes = [
  {
    path: '/',
    main: () => <Index />
  },
  {
    path: '/index',
    main: () => <Layout><Index />
  },
];

export default routes;
