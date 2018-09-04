import { createStore, applyMiddleware } from 'redux'
import { composeWithDevTools } from 'redux-devtools-extension'
import createSagaMiddleware from 'redux-saga'
import reducers from './reducers'
import sagas from './sagas'

const sagaMiddleware = createSagaMiddleware()

const store = createStore(reducers, composeWithDevTools(applyMiddleware(sagaMiddleware)))

sagaMiddleware.run(sagas)

export default store
