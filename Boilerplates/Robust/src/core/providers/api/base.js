import axios from 'axios'
import defaultsDeep from 'lodash/defaultsDeep'

const config = {
  baseURL: 'https://randomuser.me/',
}

const baseApi = axios.create(config)

baseApi.request = (path, options) => baseApi(path, defaultsDeep(options))

export default baseApi
