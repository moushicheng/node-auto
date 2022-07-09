# node-auto
nodejs版本的桌面控制框架，支持
## 鼠标
移动 moveTo(x,y)  

```javascript
auto.moveTo(100,100)
```

点击 click(button) button:0|1|2

```javascript
auto.click(0) //单击左键
auto.click(1) //单击右键
auto.click(2) //单击中键
```

## 滚轮 

滚动  setVerticalScroll(x,y)

```javascript
addon.setVerticalScroll(120,120) //向x滚动120，向y方向滚动120
```



## 键盘  
单字符输入 sendKey(Key)

```javascript
const KEY=auto.KEY;
auto.sendKey(KEY.a);
```

## 图片  
找图 find('image.png');

```javascript
console.log(
   auto.find(path.join(__dirname, "./image/marisa.png"))
);
```

