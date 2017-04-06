var connect = require('connect');
var http = require('http');

var port = 8888;
var app = connect();

function doFirst(request, response, next) {
	console.log('Bacon');
	//next()
}

function doSecond(request, response, next) {
	console.log('Tuna');
	next();
}

app.use(doFirst);
app.use(doSecond);

http.createServer(app).listen(port);
console.log(`Server is now running on port ${port}...`);
