var serialGenerator = require('./module.js');
// Use config.js to set your global variables, keep organized.
var config = require('./config');
console.log(`Global: config.maxValue = ${config.maxValue}`);
console.log(`Global: nomeDaVariavelGlobal = ${nomeDaVariavelGlobal}`);
// console.log(nomeDaVariavelSemVarOuLet);
// console.log(privado1);

console.log(`serialGenerator.generate() = ${serialGenerator.generate()}`);

// Show only keys from global;
// console.log(Object.keys(global));