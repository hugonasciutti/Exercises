// Definindo escopo global
// Com escopo global é possível acessar as variáveis contidas no módulos que por padrão são privadas, desde que declaradas com let ou var.

global.nomeDaVariavelGlobal = 1;
global.nomeDaVariavelnaFuncao = 1;
nomeDaVariavelSemVarOuLet = 10; //global também se não declarar var ou let;
let privado1 = 20;
var privado2 = 30;

exports.generate = function () {
	return nomeDaVariavelnaFuncao;
};


// GLOBAL.nomeDaVariavel2 = 2; 
// (node:8664) DeprecationWarning: 'GLOBAL' is deprecated, use 'global'

// root.nomeDaVariavel3 = 3; 
// (node:8664) DeprecationWarning: 'root' is deprecated, use 'global'
