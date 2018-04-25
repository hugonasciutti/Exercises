import React from 'react'
import map from 'lodash/map'
import PropTypes from 'prop-types'
import StyleButton from './StyleButton'
import { Icon } from 'commons'

const INLINE_STYLES = [
  { label: 'Italic', style: 'ITALIC' },
  { label: 'Bold', style: 'BOLD' },
  { label: 'Underline', style: 'UNDERLINE' },
  { label: 'Monospace', style: 'CODE' }
]

const InlineStyleControls = (props) => {
  const { link, unlink, editorState, onToggle } = props
  const currentStyle = editorState.getCurrentInlineStyle()

  return (
    <div className="RichEditor-controls">
      {map(INLINE_STYLES, type => (
        <StyleButton
          key={type.label}
          active={currentStyle.has(type.style)}
          label={type.label}
          onToggle={onToggle}
          style={type.style}
        />
      ))}
      <Icon onClick={link} className="RichEditor-styleButton" icon="link" />
      <Icon onClick={unlink} className="RichEditor-styleButton" icon="unlink" />
    </div>
  )
}

InlineStyleControls.propTypes = {
  onToggle: PropTypes.func.isRequired,
  link: PropTypes.func.isRequired,
  unlink: PropTypes.func.isRequired,
  editorState: PropTypes.object.isRequired
}

export default InlineStyleControls
