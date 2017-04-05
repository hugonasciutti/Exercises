console.log('Module 4 Loaded.\n');
var SerialGenerator = function () {
	console.log('Inside module4, outside this keyword.');
	var max = 20000;
	// The differece is using this keyword
	this.showNumber = function (){
		return max;
	};
};

module.exports = SerialGenerator;