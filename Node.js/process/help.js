let options = [
	'a) pid',
	'b) title',
	'c) arch',
	'd) platform'
];

exports.showOptions = function () {
	options.forEach(function (option) {
		console.log(option);
	});
};