/*
 * @Author: moushicheng 1163675107@qq.com
 * @Date: 2022-05-30 17:53:54
 * @LastEditors: moushicheng 1163675107@qq.com
 * @LastEditTime: 2022-05-30 18:20:35
 * @FilePath: \node-elf\index.js
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

const addon = require('./build/Release/second-native');
const {find} =require('./lib/index.js')


module.exports={
   sendKey:function(key){
    addon.sendKey(key);
   },
   moveTo:function(x,y){
     addon.moveTo(x,y);
   },
   swapMouseButton:function(swap){
    addon.swapMouseButton(swap);
   },
   scroll:function(distanceX,distanceY){
    addon.scroll(distanceX,distanceY);
   },
   getScreen:function(){
    return addon.getScreen();
   },
   click:function(button=0){
    addon.click(button);
   },
   find
}