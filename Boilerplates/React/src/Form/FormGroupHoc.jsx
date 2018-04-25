import React, { Component } from 'react'
import PropTypes from 'prop-types'
import { HOC } from 'formsy-react'

function FormGroupHoc(FormGroup) {
  class FormGroupHocComponent extends Component {

    constructor(props) {
      super(props)
      this.state = {}
    }

    getChildContext() {
      return {
        name: this.props.name,
        setValue: value => this.setState({ formsyProps: { ...this.state.formsyProps, value } }),
        setFormsyConfig: formsyProps => this.setState({ formsyProps })
      }
    }

    componentWillMount() {
      this.FormGroup = HOC(FormGroup)
    }

    render() {
      return <this.FormGroup {...this.props} {...this.state.formsyProps} />
    }
  }

  FormGroupHocComponent.propTypes = {
    name: PropTypes.string
  }

  FormGroupHocComponent.childContextTypes = {
    setFormsyConfig: PropTypes.func.isRequired,
    setValue: PropTypes.func.isRequired,
    name: PropTypes.string
  }

  return FormGroupHocComponent
}

export default FormGroupHoc
