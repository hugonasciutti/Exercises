const initialState = {
  h1: 'H1 test',
  count: 0
}

function homeReducer(state, action) {
  if(typeof state === 'undefined') {
    return initialState;
  }

  switch (action.type) {
    case 'Modify':
      return Object.assign( {}, state, { h1: payload });
    case 'Add':
      return Object.assign( {}, state, { count: state.count + 1 });

    default:
      return state;
  }
}

export default homeReducer;
