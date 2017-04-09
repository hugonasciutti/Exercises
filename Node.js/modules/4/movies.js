// Object Factory
// Make module.exports a function, making possible modules that not reference each others.

module.exports = () => {
  return {
    favMovie: ''
  }
}
