var cats = require('./cats.js');
var $ = require('jquery');
console.log('$(cats).length', $(cats).length);
$('#app').text("cats");
console.log(cats);
