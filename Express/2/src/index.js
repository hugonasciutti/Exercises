const express = require('express')
const app = express()

app.use((req, res, next) => {
  next()
})
app.get('/login', (req, res) => {
  res.send('Oi')
})

app.listen(3000)
console.log('Listening to 3000...')