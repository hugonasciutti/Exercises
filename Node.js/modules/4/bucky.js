var movies = require('./movies');

//bucky's own movies module
var buckyMovies = movies();

buckyMovies.favMovie = "Good Will Hunting"

console.log(`Buck fav movie: ${buckyMovies.favMovie}`);
