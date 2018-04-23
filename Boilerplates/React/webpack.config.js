const HtmlWebpackPlugin = require('html-webpack-plugin')
const path = require('path')

module.exports = {
  mode: 'development',

  entry: './src/index.jsx',

  output: {
    path: `${__dirname}/dist`,
    filename: 'app.js'
  },

  devtool: 'source-map',

  resolve: {
    modules: [path.resolve(__dirname, 'node_modules')],
    extensions: ['.js', '.jsx']
  },

  module: {
    rules: [
      { test: /\.(js|jsx)?$/, loader: 'babel-loader', exclude: /node_modules/ }
    ]
  },
  plugins: [
    new HtmlWebpackPlugin({
      title: 'Boilerplate',
      template: './src/index.ejs'
    })
  ]
}
