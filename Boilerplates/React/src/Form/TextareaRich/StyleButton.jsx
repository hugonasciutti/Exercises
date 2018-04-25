import React, { Component } from 'react'
import PropTypes from 'prop-types'

class StyleButton extends Component {
  constructor(props) {
    super(props)
    this.onToggle = (ev) => {
      ev.preventDefault()
      this.props.onToggle(this.props.style)
    }
  }
  render() {
    let className = 'RichEditor-styleButton'
    if (this.props.active) {
      className += ' RichEditor-activeButton'
    }
    return (
      <span className={className} onMouseDown={this.onToggle}>
        {this.props.label}
      </span>
    )
  }
}

StyleButton.propTypes = {
  style: PropTypes.string,
  label: PropTypes.string,
  active: PropTypes.bool,
  onToggle: PropTypes.func
}

StyleButton.defaultProps = {
  style: '',
  label: '',
  active: false,
  onToggle: ''
}

export default StyleButton
