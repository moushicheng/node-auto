/*
 * @Author: moushicheng 1163675107@qq.com
 * @Date: 2022-05-15 16:30:30
 * @LastEditors: moushicheng 1163675107@qq.com
 * @LastEditTime: 2022-05-30 18:30:25
 * @FilePath: \napi-examples\second\lib\binding.js
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
const addon = require('../build/Release/second-native');
const { findImage } = require('../lib/findImage/index')
const path = require('path');
const elf=require('../index.js')
// addon.moveTo(100,100)

// setTimeout(()=>{
//     for(let i=0x41;i<0x5A;i++){
//         addon.sendKey(i)
//     }
// },5000)
// addon.swapMouseButton(false)

//  setTimeout(() => {
//     addon.setVerticalScroll(120,120)
//  }, 2000);

// console.log(
//     findImage(path.join(__dirname, "./image/1.png"), path.join(__dirname, "./image/3.png"))
// );
// let time=new Date();
// const screen = addon.getScreen()
// console.log(new Date()-time);
// const data=screen.data;

// for(let i=data.length-100;i<data.length;i++){
//     console.log(data[i]);
// }
// setTimeout(() => {
//     // addon.click(0);
// }, 2000);

function sleep(t){
    return new Promise((res=>{
        setTimeout(() => {
            res(true);
        }, t);
    }))
}


console.log(
    elf.find(path.join(__dirname, "./image/marisa.png"))
);





