// module.exports = SerialGenerator;
var module1 = require('./module1.js');
console.log(`Note that the var became the function exported itself.`);
console.log(`module1() = ${module1()}`);
console.log('--');

// module.exports.SerialGenerator = function () {
var module2 = require('./module2.js');
console.log(`module2.SerialGenerator() = ${module2.SerialGenerator()}`);
console.log('--');

// exports.SerialGenerator = function() {
var module3 = require('./module3.js');
console.log(`module3.SerialGenerator() = ${module3.SerialGenerator()}`);
console.log('--');

// module4 using this keyword
// module.exports = SerialGenerator;
// Exports everthing and make it available.
var module4 = require('./module4.js');
console.log(`module4() = ${module4()}`);
console.log('module4() is undefined because it is not returning any value, but it is exporting his functions.');
console.log('');
console.log('Note that i am using the function inside module4 without needing to create an instance.');
console.log(`Direct calling function exported:`);
console.log(`showNumber() = ${showNumber()}`);
console.log('------------');





