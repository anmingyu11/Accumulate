#ThinkingInJavaSRC

#### 21并发

总体线程的实现，内核线程用户线程,用户线程和轻量级进程混合实现。
java线程调度机制 协同式，抢占式
java线程的实现
java线程状态交换。
java线程调度器
ExecutorService Executors
Callable Future<String>
线程优先级
wait() notify() notifyAll()
阻塞与等待。
用户线程，内核线程.
主内存和工作内存.
关键字volatile.
原子操作，非原子操作.
原子性，可见性，有序性。
内核线程，进程，轻量级进程
用户空间和内核空间。
ThreadFactory.
后台线程。
join() interrput()
Thread.UncaughtExceptionHandler
序列化与反序列化。
互斥量
synchronized Lock ReentrantLock concurrent类库
上下文切换
try finally
++i和i++
AtomicInteger以及相关的类。
Atomic类是被设计用来构建java.util.concurrent中的类，因此只在特殊情况下才在自己的代码中使用它们。
临界区 synchronized建立临界区(同步控制块)
Collections.synchronizedList()
synchronized不属于方法签名的组成部分，所以可以在覆盖方法的时候加上去。
ThreadLocal
竞争条件
signal() signalAll()
interrput()和shutdownNow() Future.cancel()
