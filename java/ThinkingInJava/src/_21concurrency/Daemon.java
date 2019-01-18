package _21concurrency;

import base.Base;

/**
 * 任何一个由后台线程创建的线程，都将自动设置成后台线程
 * 后台进程不执行finally语句块里面的
 * 一旦main退出，JVM就会立即关闭所有的后台进程。
 */
public class Daemon implements Runnable {
    private Thread[] t = new Thread[10];

    @Override
    public void run() {
        for (int i = 0; i < t.length; ++i) {
            t[i] = new Thread(new DaemonSpawn());
            t[i].start();
            Base.println("DaemonSpawn " + i + " started. ");
        }
        for (int i = 0; i < t.length; ++i) {
            Base.println("t[" + i + "].isDaemon() = " + t[i].isDaemon() + ", ");
        }
        while (true) {
            Thread.yield();
        }
    }

    class DaemonSpawn implements Runnable {

        @Override
        public void run() {
            while (true) {
                Thread.yield();
            }
        }
    }
}
