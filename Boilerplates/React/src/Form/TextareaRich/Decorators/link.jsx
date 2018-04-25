import React from 'react'
import PropTypes from 'prop-types'
import { Entity } from 'draft-js'

const Link = (props) => {
  const { url } = Entity.get(props.entityKey).getData()
  return <a target="_blank" href={url}>{props.children}</a>
}

function isLink(character) {
  const entityKey = character.getEntity()
  return entityKey !== null && Entity.get(entityKey).getType() === 'LINK'
}

function findLinkEntities(contentBlock, callback) {
  contentBlock.findEntityRanges(isLink, callback)
}

Link.propTypes = {
  children: PropTypes.any.isRequired,
  entityKey: PropTypes.string.isRequired
}

export default {
  strategy: findLinkEntities,
  component: Link
}
