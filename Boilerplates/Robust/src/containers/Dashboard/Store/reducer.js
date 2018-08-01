import { createReducer } from 'core/utils/redux'
import { types } from './actions'

export const initialState = {
  candidates: [],
  loaders: {
    candidates: true,
  },
}

const reducer = {
  [types.LOADED_CANDIDATES]: (state, { data }) =>
    ({ ...state, candidates: data }),
  [types.UPDATE_LOADERS]: (state, { loaders }) =>
    ({ ...state, loaders: { ...state.loaders, ...loaders } }),
}

export default createReducer(initialState, reducer)
