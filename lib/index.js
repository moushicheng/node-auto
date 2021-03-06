const { imageFinder } = require('./image/index')
const addon = require('../build/Release/second-native');
const images = require("images");
const KEY= require('./keys.js')
const find = function (src, options) {
   const image = images(src)
   const screen = addon.getScreen();
   const finder = new imageFinder(screen, {
      data: image.encode('raw').slice(12),
      width: image.width(),
      height: image.height(),
   }, options)
   return finder.find();
}

module.exports = {
   find,
   KEY
}