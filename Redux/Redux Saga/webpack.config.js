const webpack = require('webpack');
const path = require('path');
const ExtractTextPlugin = require('extract-text-webpack-plugin');

const DefinePlugin = new webpack.DefinePlugin({
  'process.env.NODE_ENV': [JSON.stringify('production'), JSON.stringify('development')],
});

module.exports = {
  devtool: 'source-map',
  entry: path.join(__dirname, 'public/app.js'),
  output: { path: path.join(__dirname, 'public/'), filename: 'jsBundle.js' },
  target: 'node',
  module: {
    rules: [{
      test: /.jsx?$/,
      loader: 'babel-loader',
      exclude: /node_modules/,
      query: {
        presets: ['es2015', 'stage-1', 'react'],
      },
    },
    {
      test: /\.svg$/,
      loader: 'svg-sprite-loader?' + JSON.stringify({
        name: 'icon-[name]',
        prefixize: true,
      }),
    },
    {
      test: [/\.(css|scss)$/],
      loader: ExtractTextPlugin.extract({
        fallback: 'style-loader',
        use: [{
          loader: 'css-loader',
          options: {
            importLoaders: 1,
            modules: true,
            localIdentName: '[name]-[local]',
          },
        },
        {
          loader: 'sass-loader',
        },
        {
          loader: 'postcss-loader',
        },
        ],
      }),
    }],
  },
  plugins: [
    new ExtractTextPlugin('./cssBundle.css'),
    DefinePlugin,
  ],
};
