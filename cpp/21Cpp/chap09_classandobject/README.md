#### 类和对象。

####深复制，浅复制，编译器二进制复制
通过在复制构造函数声明中使用const，可确保赋值构造函数不会修改指向的源对象。另外，复制构造函数的参数必须按引用传递，否则调用它时将复制实参的值，导致对数据进行浅复制。
类包含原始指针成员时，务必编写复制构造函数和复制赋值运算符。

####复制构造函数(感受到了可怕)
复制构造函数接收一个以引用方式传入当前类的对象作为参数。这个参数是源对象的别名，您使用它来编写自定义的复制代码，确保对所有缓冲区进行深复制。
####禁止对象赋值(屌)
####禁止在栈上实例化类(屌)
####sizeof()
####神奇的友元
