var http = require('http');
var fs = require('fs');

function send404Response(response) {
  response.writeHead(404, {"Context-Type": "text/plain"});
  response.write("Error 404: Page not found!"); // Or you could write your own 404.html and read as shown below.
  response.end();
}

function onRequest(request, response) {

  if (request.method == 'GET' && request.url == '/') {
    response.writeHead(200, {"Context-Type": "text/html"});
    fs.createReadStream("./index.html").pipe(response);
  } else {
    send404Response(response);
  }
}

http.createServer(onRequest).listen(8888);
console.log('Server is now running on port 8888...');
