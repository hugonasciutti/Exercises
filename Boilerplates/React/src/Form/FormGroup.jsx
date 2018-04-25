import React, { Component } from 'react'
import PropTypes from 'prop-types'
import FormGroupHoc from './FormGroupHoc'
import Translate from '../Translate'
import './style.scss'

class FormGroup extends Component {

  getErrorClassName = () => {
    const { isValid, isPristine, customValidation } = this.props
    return (!isValid() || !customValidation().isValid) && !isPristine() ? 'has-danger' : null
  }

  renderErrorMessage = () => {
    const { isValid, message } = this.props.customValidation()
    return (
      <div className="form-group-error">
        <Translate id={!isValid ? message : 'general.required'} />
      </div>
    )
  }

  render() {
    const { children, className } = this.props
    const hasError = this.getErrorClassName()

    return (
      <div className={`form-group ${className} ${hasError || ''}`}>
        {children}
        {hasError && this.renderErrorMessage()}
      </div>
    )
  }
}

FormGroup.defaultProps = {
  className: '',
  customValidation: () => ({ isValid: true, message: undefined })
}

FormGroup.propTypes = {
  children: PropTypes.node.isRequired,
  className: PropTypes.string,
  customValidation: PropTypes.func,
  isPristine: PropTypes.func.isRequired,
  isValid: PropTypes.func.isRequired
}

export default FormGroupHoc(FormGroup)
