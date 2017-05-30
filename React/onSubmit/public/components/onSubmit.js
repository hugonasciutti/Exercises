import React from 'react';

class OnSubmit extends React.Component {
  constructor(props) {
    super(props)
    this.state = {
      verificar: false,
      css: ''
    }
    this.css = ''
  }

  hasError(e) {
    e.preventDefault()
    console.log('this.state.verificar: ', this.state.verificar);
    if(this.state.verificar) {
  	   console.log('verifiquei e apontei os erros');
       this.setState({css: 'hasError'})
    } else {
      console.log('não verifiquei, this.state.verificar é false');
    }
  }

  render() {
    return (
    <div>
      <form id="myform">
    	   <input type="text" onSubmit={console.log('input rodou submit sozinho')} className={`${this.state.css}`} ></input>
      </form>
      <button onClick={() => this.setState({ verificar: true })} form="myform">Submit</button>
    </div>
    )
  }
}

export default OnSubmit
