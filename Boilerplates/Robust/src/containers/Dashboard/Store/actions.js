export const types = {
  UPDATE_LOADERS: 'DASHBOARD/UPDATE_LOADERS',
  LOADED_CANDIDATES: 'DASHBOARD/LOADED_CANDIDATES',
  LOAD_CANDIDATES: 'DASHBOARD/LOAD_CANDIDATES',
}

export const actions = {
  loadCandidates: (page, results) => ({ type: types.LOAD_CANDIDATES, page, results }),
  loadedCandidates: data => ({ type: types.LOADED_CANDIDATES, data }),
  updateLoaders: loaders => ({ type: types.UPDATE_LOADERS, loaders }),
}
