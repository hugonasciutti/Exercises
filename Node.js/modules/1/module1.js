console.log('Module 1 Loaded.\n');
var max = 10000;

var SerialGenerator = function () {
	return Math.floor(Math.random() * max);
};

module.exports = SerialGenerator;

