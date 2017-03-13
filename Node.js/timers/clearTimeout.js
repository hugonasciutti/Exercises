let a = setTimeout(function () {
	console.log('A ' + new Date());
}, 3000);
let b = setTimeout(function () {
	console.log('B ' + new Date());
}, 3000);

clearTimeout(a);