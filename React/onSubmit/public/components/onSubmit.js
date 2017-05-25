import React from 'react';

class OnSubmit extends React.Component {
  constructor(props) {
    super(props)
    this.state = {
      verificar: false
    }
  }

  hasError() {
    console.log('this.state.verificar: ', this.state.verificar);
    if(this.state.verificar) {
  	   console.log('verifiquei e apontei os erros');
       this.setState({
         verificar: false
       })
    } else {
      console.log('não verifiquei, this.state.verificar é false');
    }
  }

  render() {
    return (
    <div>
      <form id="myform" onSubmit={() => this.setState({verificar: true})}>
    	   <div onClick={this.hasError()} >Hello</div>
      </form>
      <button form="myform">Submit</button>
    </div>
    )
  }
}

export default OnSubmit
