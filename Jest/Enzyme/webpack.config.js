const path = require('path');

module.exports = {
  devtool: 'source-map',
  entry: './public/app.js',
  output: {
    path: path.join(__dirname, 'public/'),
    filename: 'jsBundle.js',
  },
  module: {
    loaders: [
      {
        test: /\.jsx?$/,
        loader: 'babel-loader',
        exclude: /node_modules/,
        query: {
          cacheDirectory: true,
          presets: ['react', 'es2015'],
        },
      },
    ],
  },
};
