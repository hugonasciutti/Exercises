module.exports = {
    entry: './src/app.js',
    output: {
        path: __dirname + '/bin',
        filename: 'app.bundle.js'
    }
};
//
// output: {
//   path: path.join(__dirname, 'public/'),
//   // diretório onde todos os arquivos do bundle serão gerados
//
//   filename: 'js/[name].js',
//   // caminho e nome do arquivo de scripts gerado
//
//   publicPath: '/',
//   // path relativo para o HTML carregar os recursos
// },
