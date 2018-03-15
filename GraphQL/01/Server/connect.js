import connect from 'connect';
import bodyParser from 'body-parser';
import query from 'connect-query';
import { graphqlConnect } from 'apollo-server-express';
import http from 'http';

const PORT = 3000;

const app = connect();

// bodyParser is only needed for POST.
app.use('/graphql', bodyParser.json());
// query is only needed for GET.
app.use('/graphql', query());
app.use('/graphql', graphqlConnect({ schema: myGraphQLSchema }));

http.createServer(app).listen(PORT);