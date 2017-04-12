const addon = require('./build/Release/addon')
const obj1 = addon('hello','mac');
const obj2 = addon('hello','george');
console.log(obj1)
console.log(obj1.msg)