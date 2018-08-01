import baseApi from './api/base'

export default {
  loadCandidates: params => baseApi.request('api', { params, method: 'GET' }),
}
