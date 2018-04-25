import React, { Component } from 'react'
import PropTypes from 'prop-types'
import { Editor, CompositeDecorator, EditorState, RichUtils, Entity } from 'draft-js'
import { stateFromHTML } from 'draft-js-import-html'
import { stateToHTML } from 'draft-js-export-html'
import { getBlockStyle, styleMap } from './helper'
import BlockStyleControls from './BlockStyleControls'
import InlineStyleControls from './InlineStyleControls'
import FieldHOC from '../FieldHoc'
import { link } from './Decorators'
import { Input, Button, Icon } from 'commons'
import './style.scss'

class TextareaRich extends Component {
  constructor(props) {
    super(props)
    const { htmlText } = props
    const decorators = new CompositeDecorator([link])

    const contentState = stateFromHTML(htmlText)
    this.state = {
      editorState: EditorState.createWithContent(contentState, decorators),
      showInput: false,
      urlValue: ''
    }

    this.focus = () => this.refs.editor.focus()
    this.onURLChange = text => this.setState({ urlValue: text })
    this.onChange = this.onChange.bind(this)
    this.onTab = this.onTab.bind(this)
    this.updateState = this.updateState.bind(this)
    this.handleKeyCommand = this.handleKeyCommand.bind(this)
    this.toggleBlockType = this.toggleBlockType.bind(this)
    this.hidePlaceholder = this.hidePlaceholder.bind(this)
    this.toggleInlineStyle = this.toggleInlineStyle.bind(this)
    this.promptForLink = this.promptForLink.bind(this)
    this.confirmLink = this.confirmLink.bind(this)
    this.onLinkInputKeyDown = this.onLinkInputKeyDown.bind(this)
    this.removeLink = this.removeLink.bind(this)
    this.cancel = this.cancel.bind(this)
  }
  onChange(editorState) {
    const { onChange } = this.props
    const contentState = editorState.getCurrentContent()

    this.setState({ editorState })
    onChange(stateToHTML(contentState), contentState.getPlainText() || undefined)
  }

  onTab(ev) {
    const maxDepth = 4
    this.onChange(RichUtils.onTab(ev, this.state.editorState, maxDepth))
  }

  onLinkInputKeyDown(ev) {
    if (ev.which === 13) {
      this.confirmLink(ev)
    }
  }

  handleKeyCommand(command) {
    const { editorState } = this.state
    const newState = RichUtils.handleKeyCommand(editorState, command)
    if (newState) {
      this.onChange(newState)
      return true
    }
    return false
  }

  toggleBlockType(blockType) {
    const { editorState } = this.state
    this.onChange(RichUtils.toggleBlockType(editorState, blockType))
  }

  toggleInlineStyle(inlineStyle) {
    const { editorState } = this.state
    this.onChange(RichUtils.toggleInlineStyle(editorState, inlineStyle))
  }

  hidePlaceholder() {
    const { editorState } = this.state
    const contentState = editorState.getCurrentContent()
    const isUnstyled = contentState.getBlockMap().first().getType() !== 'unstyled'
    let className = 'RichEditor-editor'

    if (!contentState.hasText() && isUnstyled) {
      className += ' RichEditor-hidePlaceholder'
    }

    return className
  }

  updateState(editorState) {
    this.setState({ editorState })
  }

  confirmLink(ev) {
    ev.preventDefault()
    const { urlValue, editorState } = this.state
    const entityKey = Entity.create('LINK', 'IMMUTABLE', { url: urlValue })
    const selection = editorState.getSelection()
    const newState = RichUtils.toggleLink(editorState, selection, entityKey)
    this.onChange(newState)
    this.setState({ showInput: false, urlValue: '' })
  }

  cancel() {
    this.setState({ showInput: false, urlValue: '' })
  }

  removeLink(ev) {
    ev.preventDefault()
    const { editorState } = this.state
    const selection = editorState.getSelection()
    if (!selection.isCollapsed()) {
      const newState = RichUtils.toggleLink(editorState, selection, null)
      this.onChange(newState)
    }
  }

  promptForLink(ev) {
    ev.preventDefault()
    const { editorState } = this.state
    const selection = editorState.getSelection()
    if (!selection.isCollapsed()) {
      this.setState({ showInput: true, urlValue: '' })
    }
  }

  renderInput() {
    const { urlValue } = this.state

    return (
      <div className="col-md-12 pd-bottom-15 row v-center">
        <div className="col-md-6 row">
          <Input
            onChange={this.onURLChange}
            placeholder="URL"
            value={urlValue}
            onKeyDown={this.onLinkInputKeyDown}
          />
        </div>
        <div className="pd-left-15">
          <Button className="RichEditor-ok" size="30px" circle onClick={this.confirmLink}>
            <Icon icon="check" />
          </Button>
        </div>
        <div className="pd-left-15">
          <Button className="RichEditor-cancel" size="30px" circle onClick={this.cancel}>
            <Icon icon="remove" />
          </Button>
        </div>
      </div>
    )
  }

  render() {
    const { editorState, showInput } = this.state

    return (
      <div className="RichEditor-root">
        {showInput && this.renderInput()}
        <BlockStyleControls editorState={editorState} onToggle={this.toggleBlockType} />
        <InlineStyleControls
          unlink={this.removeLink}
          link={this.promptForLink}
          editorState={editorState}
          onToggle={this.toggleInlineStyle}
        />
        <div className={this.hidePlaceholder()} onClick={this.focus}>
          <Editor
            blockStyleFn={getBlockStyle}
            customStyleMap={styleMap}
            editorState={editorState}
            handleKeyCommand={this.handleKeyCommand}
            onChange={this.onChange}
            onTab={this.onTab}
            placeholder=""
            ref="editor"
            spellCheck
          />
        </div>
      </div>
    )
  }
}

TextareaRich.propTypes = {
  onChange: PropTypes.func,
  htmlText: PropTypes.string
}

TextareaRich.defaultProps = {
  onChange: () => null,
  htmlText: ''
}

export default FieldHOC(TextareaRich)
