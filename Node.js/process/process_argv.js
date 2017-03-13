// Type this on cmd or Terminal and it will return an array of parameters
//$ node process_argv.js a b c
//> node process_argv.js a b c
// console.log(process.argv);
// console.log('\n');

// slice(2) will remove the 2 first arguments
// console.log('options[0]: ' + options[0]);
// console.log('options[1]: ' + options[1]);


let options = process.argv.slice(2);
let help = require('./help.js');
if(options.length < 1) {
	console.log('Insira pelo menos um argumento:');
	help.showOptions();
	return;
}
switch (options[0]) {
	case 'a':
		console.log('pid: ' + process.pid);	
		break;
	case 'b':
		console.log('title: ' + process.title);	
		break;
	case 'c':
		console.log('arch: ' + process.arch);	
		break;
	case 'd':
		console.log('platform: ' + process.platform);	
		break;
	case 'help':
		console.log('--Help--');
		help.showOptions();
		break;
	default:
		console.log('Parâmetro não reconhecido ou não existe.');
		break;
}
