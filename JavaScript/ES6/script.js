/*jshint esversion: 6 */
// ES6


// ES6 Summary
// 1. String with multiple lines pressing enter using ``
// 2. Variable inside a string `${orders.name}`, `${orders.value * 10}` expressions allowed
// 3. Arrow Function syntax
// 4. let, const
// 5. ...array | Spread Operator
// 6. inheritance | super()
// 7. Generators

// 1. String with multiple lines pressing enter using ``
console.log('\n1. String with multiple lines pressing enter using ``');

// Multiple lines in output
// This notation Read enter break lines

var text = `Lorem ipsum dolor sit
amet,
consectetur adipisicing elit, sed do eiusmod
tempor incididunt ut labore.`;
console.log(text);

// 2. Variable inside a string `${orders.name}`, `${orders.value * 10}` expressions allowed
console.log('\n2. Variable inside a string `${orders.name}`, `${orders.value * 10}` expressions allowed');

// Variable inside a string whithout need to add + to concatenate
// For loop
var totalAmount = 0;
for (var i=0; i<orders.length; i++){
	totalAmount += orders[i].amount;
}
console.log(`totalAmount = ${totalAmount}`);

// 3. Arrow Function syntax
console.log('\n3. Arrow Function syntax');

// Arrow function syntax
const PI = 3.14159265;
var circleArea = r => PI * Math.pow(r, 2);
console.log(circleArea(10));

// The parameter and the object must have the same name.
// (x) => x.name
// Same parameter name for x.name;

// Functional Programming
// map, filter, reject, reduce

let animals = [
	{ name: "animal1", species: "rabbit" },
	{ name: "animal2", species: "dog" },
	{ name: "animal3", species: "cat" },
	{ name: "animal4", species: "owl"}
];
var names = animals.map((x) => x.name);
console.log(`names = ${names}`); 

//High order function
var totalAmount2 = orders.reduce(function(sum, orders){
	return sum + orders.amount;
}, 0);
console.log(`totalAmount2 = ${totalAmount2}`);

// Even better
// High order function / Functional Programming
// ES6
var totalAmount3 = orders.reduce((sum, orders) => sum + orders.amount, 0);
console.log(`totalAmount3 = ${totalAmount3}`);


// 4. let, const
console.log('\n4. let, const');

// let 
// is similar to var for declaring variable, the main difference
// is works as a tree and it goes to its parents, trying to find if 
// he was already declared.

var orders = [
	{ amount: 250 },
	{ amount: 400 },
	{ amount: 100 },
	{ amount: 325 }
];


// 5. ...array | syntax
console.log('\n5. ...array | syntax');

function addNumbers(a, b, c){
	console.log(a + b +c);
} 

var nums = [3, 4, 7];
addNumbers(...nums);

var meats = ['bacon', 'ham'];
var food = ['apples', ...meats, 'kiwi', 'rice'];
console.log(food);


// 6. inheritance | super()
console.log('\n6. inheritance | super()');

class User {
	constructor(username, email, password){
		this.username = username;
		this.email = email;
		this.password = password;
	}

	say(){
		console.log(this.email);
	}

}

class Member extends User {
	constructor(a, b, c, memberPackage){
		super(a, b, c);
		this.package = memberPackage;
	}

	getName(){
		console.log(this.username);
	}
	getPackage(){
		console.log(this.package);
	}
}
// let mike = new User('mike', 'mike@gmail.com', '12345');
// mike.say();

let harry = new Member('harry', 'harry@gmail.com', '12345', 'yes');
harry.getPackage();


