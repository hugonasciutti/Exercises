import React from 'react'
import LandingIndex from './components/index.react';
import LandingAbout from './components/about.react';

const routes = [
  {
    path: '/',
    exact: true,
    main: () => <LandingPage />,
  },
  {
    path: '/cadastro/passo-1',
    main: () => <LandingPage><Step1 /></LandingPage>,
  },
  {
    path: '/cadastro/passo-2',
    main: () => <LandingPage><Step2 /></LandingPage>,
  },
  {
    path: '/cadastro/passo-3',
    main: () => <LandingPage><Step3 /></LandingPage>,
  },
  {
    path: '/cadastro/passo-4',
    main: () => <LandingPage><Step4 /></LandingPage>,
  },
  {
    path: '/entrar',
    main: () => <LandingPage><WrapperLoginPass><Login /></WrapperLoginPass></LandingPage>,
  },
  {
    path: '/recuperar-senha',
    main: () => <LandingPage><WrapperLoginPass>
      <LoginPassRecovery />
    </WrapperLoginPass></LandingPage>,
  },
  {
    path: '/welcome',
    main: () => <Welcome />,
  },
  {
    path: '/guideline',
    main: () => <Guideline />,
  },
  {
    path: '/acesso-negado',
    main: () => <AccessDeniedPage />,
  },
  {
    path: '/pagina-exemplo',
    main: () => <PaginaExemplo />,
  },
]

export default routes
