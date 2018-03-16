import { MongoClient } from 'mongodb'

MongoClient.connect('mongodb://localhost:27017', (err, mongo) => {
	if(err) throw new Error(err)
	return mongo
})
