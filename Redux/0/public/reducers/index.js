import { combineReducers } from 'redux'
import home from './home';
import about from './about';

export default combineReducers({
  about,
  home
});
