const HtmlWebpackPlugin = require('html-webpack-plugin')
const path = require('path')

module.exports = {
  mode: 'development',
  devtool: 'source-map',

  entry: './src/index.jsx',
  output: {
    path: path.resolve(__dirname, './dist'),
    filename: 'app.js',
    publicPath: '/',
  },

  devServer: {
    historyApiFallback: true,
  },

  resolve: {
    alias: {
      core: path.resolve(__dirname, './src/core'),
    },
    modules: [path.resolve(__dirname, 'node_modules')],
    extensions: ['.js', '.jsx'],
  },

  module: {
    rules: [
      { test: /\.(js|jsx)?$/, loader: 'babel-loader', exclude: /node_modules/ },
    ],
  },

  plugins: [
    new HtmlWebpackPlugin({
      title: 'Candidates Manager',
      template: './src/index.ejs',
    }),
  ],
}
