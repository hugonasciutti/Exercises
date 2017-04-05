var movies = require('./movies');

//emily's own movies module
var emilyMovies = movies();

emilyMovies.favMovie = "The Notebook"

console.log(`Emily fav movie: ${emilyMovies.favMovie}`);
