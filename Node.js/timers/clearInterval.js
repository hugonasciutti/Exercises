let i = setInterval(function () {
	console.log('I 2s ' + new Date());
}, 2000);

setTimeout(function (){
	clearTimeout(i);
}, 6100);
