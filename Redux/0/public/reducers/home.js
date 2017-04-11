const initialState = {
  count: 0
}

const homeReducer = (state = initialState, action) => {
  if(typeof state === 'undefined') {
    return initialState;
  }
  
  switch (action.type) {
    case 'Add':
      return Object.assign( {}, state, { count: state.count + 1 })
    default:
      return state;
  }
}

export default homeReducer;
