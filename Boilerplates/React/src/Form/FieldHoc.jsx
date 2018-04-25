import React from 'react'
import PropTypes from 'prop-types'
import pick from 'lodash/pick'

const formsyProps = ['value', 'validations', 'validationError', 'required']

function FieldHOC(Component) {
  class Field extends React.Component {

    componentWillMount() {
      if (!this.context.setFormsyConfig) {
        return
      }

      const props = pick(this.props, formsyProps)
      props.value = this.formatValue(props.value)
      this.context.setFormsyConfig(props)
    }

    componentWillReceiveProps({ value }) {
      if (this.context.setValue && value !== this.props.value) {
        this.context.setValue(this.formatValue(value))
      }
    }

    formatValue(value) {
      const { formatterOnReceive } = this.props
      return formatterOnReceive ? formatterOnReceive(value) : value
    }

    buildPlaceholder() {
      const { name, formName, intl } = this.context
      const id = formName && `form.${formName}.placeholder.${name}`

      return intl.messages[id]
    }

    buildName() {
      return this.props.name || this.context.name
    }

    render() {
      return (
        <Component
          name={this.buildName()}
          placeholder={this.props.placeholder || this.buildPlaceholder()}
          {...this.props}
          value={this.formatValue(this.props.value)}
        />
      )
    }
  }

  Field.contextTypes = {
    intl: PropTypes.any,
    formName: PropTypes.string,
    name: PropTypes.string,
    setFormsyConfig: PropTypes.func,
    setValue: PropTypes.func
  }

  Field.propTypes = {
    formatterOnReceive: PropTypes.func,
    name: PropTypes.string,
    placeholder: PropTypes.string,
    value: PropTypes.oneOfType([PropTypes.string, PropTypes.number, PropTypes.object])
  }

  return Field
}

export default FieldHOC
