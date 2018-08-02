import map from 'lodash/map'
import { all, fork } from 'redux-saga/effects'
import Dashboard from './containers/Dashboard/Store/saga'

const sagas = [
  Dashboard,
]

export default function* () {
  yield all(map(sagas, saga => fork(saga)))
}
