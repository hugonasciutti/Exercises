import CandidatesProvider from 'core/providers/candidates'
import { takeEvery, all, call, put } from 'redux-saga/effects'
import { types, actions } from './actions'

export function* loadCandidates({ page = 0, results = 20 }) {
  try {
    yield put(actions.updateLoaders({ candidates: true }))
    const { data } = yield call(CandidatesProvider.loadCandidates, { page, results })
    yield put(actions.loadCandidates(data))
  } catch (err) {
    console.error(err)
  } finally {
    yield put(actions.updateLoaders({ candidates: false }))
  }
}

export default function* () {
  yield all([
    takeEvery(types.LOAD_RENEWALS, loadCandidates),
  ])
}
