import { combineReducers } from 'redux'
import homeReducer from './home';
import about from './about';

export default combineReducers({
  about,
  homeReducer
});
