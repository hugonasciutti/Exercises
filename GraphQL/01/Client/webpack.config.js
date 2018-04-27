const HtmlWebpackPlugin = require('html-webpack-plugin')

module.exports = {
  entry: './src/index.js',
  module: {
    rules: [{ test: /\.(js|jsx)?$/, loader: 'babel-loader', exclude: /node_modules/ }]
  },
  plugins: [
    new HtmlWebpackPlugin({
      title: 'Client',
      template: './src/index.html'
    })
  ]
}