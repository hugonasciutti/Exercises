import React, { PureComponent } from 'react'
import PropTypes from 'prop-types'

class Dashboard extends PureComponent {
  render() {
    const { loaders } = this.props

    return (
      <div>
        Dashboard
      </div>
    )
  }
}

Dashboard.propTypes = {
  loaders: PropTypes.object.isRequired,
}

export default Dashboard
