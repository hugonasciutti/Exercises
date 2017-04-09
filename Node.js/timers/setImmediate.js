console.log('A ' + new Date());
setImmediate(function () {
	console.log('Immediate ' + new Date());
});
console.log('B ' + new Date());
