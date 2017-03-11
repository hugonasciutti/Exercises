console.log('Module 2 Loaded.\n');
var max = 10000;

module.exports.SerialGenerator = function () {
	return Math.floor(Math.random() * max);
};
