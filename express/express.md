Express - express.js / expressjs - v5.2.1 - web framework for node.js / nodejs / node - written in js - does not bundle its own type definations - community maintained types for express and nodejs from DefinitelyTyped - install them as dev deps

- fast
- unopinionated
- minimalist - 68 pkg deps

$ npm init
$ npm install <pkg>
$ npm install <pkg1> <pkg2> ...
$ npm install - npm i
$ bun add

for temp add -> $ npm install express --no-save
for deps -> $ npm install express --save
for dev deps -> $ npm install express --save-dev or -D
$ bun add --dev

index.js as default entry file

make it to

- app.js - actual express application
- server.js - where server starts
- index.js - if combine app.js + server.js

express generator - also include jade templates - also known as pug

For every other path, it will respond with a 404 Not Found.

The req (request) and res (response) are the exact same objects that Node provides, so you can invoke req.pipe(), req.on('data', callback), and anything else you would do without Express involved.