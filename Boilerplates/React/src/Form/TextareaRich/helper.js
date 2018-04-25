export function getBlockStyle(block) {
  return {
    blockquote: 'RichEditor-blockquote'
  }[block.getType()] || null
}

// Custom overrides for "code" style.
export const styleMap = {
  CODE: {
    backgroundColor: 'rgba(0, 0, 0, 0.05)',
    fontFamily: '"Inconsolata", "Menlo", "Consolas", monospace',
    fontSize: 16,
    padding: 2
  }
}
