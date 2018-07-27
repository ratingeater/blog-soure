# 前言

## 羡慕

很久很久之前，我看到了各路大神的各种超神博客，比如[这样](https://cnyali-lk.com)，[还有这样](http://ruanx.pw/)，rxz还登上了洛谷首页的友联，太强了！令我无比羡慕，于是我就决定要从零开始建立属于自己的博客。

## 弃坑

然而一名蒟蒻OIER想轻轻松松转开发是绝对不可能的，在[自学了](https://www.codecademy.com/)3星期的html初级后主动弃坑，实在是有难度，这玩意与c++几乎没啥相似的地方，看到js的教程那一刻，我的内心（不可描述）。

## 博客网站

于是我就在[cnblogs](https://www.cnblogs.com/)上[csdn](https://www.csdn.net/)上开始建设，但我更喜欢cnblogs。

### 优劣分析

#### cnblogs优缺点

1. 可控性强，支持js自定义
2. 界面不友好，UI比较丑
3. 访问速度快，支持自带图床

#### csdn优缺点

1. 可控性不强。
2. 支持各种文本编辑模式。
3. UI设计好看。
4. 访问速度欠佳。

我为什么更喜欢cnblogs？因为我想控制属于我的一切事物。

## 再弃坑

但大约3个月之后，也就是前几天，突然见到lk大佬的博客，果断放弃了原本不是很高质量的cnblogs转向对[hexo](https://hexo.io/)的研究。

在阅读了许许多多的文章后，我得出结论：千万不要轻易尝试hexo，这相当于会付出巨大的成本在建设道路中的各种坑点。能用cnblogs就用cnblogs吧。

# 建设思路

1. hexo生成
2. 上传至GitHub/coding
3. 生成pages

没错，就是这么简单的三个步骤，但是想要将博客运维好就不简单了。

以后有时间再写一篇文章介绍。

# 建设过程

## 准备工作

### 下载Git


官网下载：[下载链接](https://git-scm.com/download/win)(稍微等一下会有下载弹框)

不推荐其他地方的下载方式，因为有可能是历史版本已经不能支持。

安装的话一路回车就好了。

### 下载node.js

官网下载：[下载链接](http://nodejs.org/download/)(稍微等一下会有下载弹框)

同样不推荐到其他地方下载。

安装的话一路回车就好了。

## 安装Hexo

随便找一个系统盘，新建一个文件夹，名称随意。

![](http://i1.bvimg.com/644508/34bbe6684a3a14ee.png)

右键单击，选择git bash here

![](http://i1.bvimg.com/644508/36f328443ec32d23.png)

在命令框中输入`npm install -g hexo`

接着输入`hexoinit`

依次输入：`npm install` -> `hexo server` 

这时候你可以进入浏览器输入[http://localhost:4000](http://localhost:4000)，如果你看到下图所示内容则说明安装成功了。

![](https://images2017.cnblogs.com/blog/1108615/201710/1108615-20171021232413224-1288183746.png)

失败的可能性不大，可以重新按照上述步骤操作一遍或查看这篇文章：[here](https://blog.csdn.net/jzooo/article/details/46781805)。

每一次发布新的内容时循环使用下面代码：

`hexo clean` -> `hexo g` -> `hexo d`



## 发布到coding

`git config --global user.name "你的用户名"`
`git config --global user.email "你的邮箱"`

不需要加引号（我不会告诉你我被这个引号坑了多久）

然后到C:\Users\你的用户名\\.ssh 可以找到一个文件叫`id_rsa.pub`