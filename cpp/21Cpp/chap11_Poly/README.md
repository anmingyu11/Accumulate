#### 虚函数表

`vft*`指针
每个虚函数表都由函数指针组成，其中每个指针都指向相应虚函数的实现。在类Derived的虚函数表中，除了一个函数指针外，其他所有函数指针都指向Derived本地的虚函数实现。

运行阶段类型识别。

#### 抽闲基类

抽象基类不能被实例化
要创建抽象基类，可声明纯虚函数。

跟抽象类一样的。

以下述方式声明的虚函数被称为纯虚函数：
```C++
class AbstractBase{
	public:
		virtual void DosomeThing()=0;
};
```

#### 虚析构函数
#### 纯虚函数
#### 虚继承
虚继承旨在确保只有一个基类实例。
