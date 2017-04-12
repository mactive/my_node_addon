const addon = require('./build/Release/addon');
addon((msg) => {
  console.log(msg);
})