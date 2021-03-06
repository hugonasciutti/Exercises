var path = require('path');
var webpack = require('webpack');

module.exports = {
  entry: path.join(__dirname, "public/app.js"),
  output: { path: path.join(__dirname, "public/"), filename: 'bundle.js' },
  target: 'node',
  module: {
    loaders: [{
      test: /.jsx?$/,
      loader: 'babel-loader',
      exclude: '/node_modules/',
      query: {
        presets: ['es2015', 'react']
      }
    }]
  },
  plugins: [
    new webpack.DefinePlugin({
      'process.env.NODE_ENV': JSON.stringify('production')
    })
  ]
};
