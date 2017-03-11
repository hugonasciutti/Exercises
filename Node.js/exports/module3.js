console.log('Module 3 Loaded.\n');
var max = 10000;

exports.SerialGenerator = function(){
	return Math.floor(Math.random() * max);
};
