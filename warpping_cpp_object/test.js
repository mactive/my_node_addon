// test.js
const addon = require('./build/Release/addon')

const obj = new addon.MyObject(10);
console.log(obj.plusOne());
console.log(obj.plusOne());
console.log(obj.plusOne());