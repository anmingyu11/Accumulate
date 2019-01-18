package _21concurrency;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.TimeUnit;

import base.Base;

public class DaemonThreadFactory implements Runnable {

    private static class Fac implements ThreadFactory {

        @Override
        public Thread newThread(Runnable r) {
            Thread t = new Thread();
            t.setDaemon(true);
            return t;
        }
    }

    @Override
    public void run() {
        try {
            while (true) {
                TimeUnit.MILLISECONDS.sleep(100);
                Base.println(Thread.currentThread() + " " + this);
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
            Base.print("sleep() interrupted");
        }
    }

    public static void main(String[] args) throws InterruptedException {
        ExecutorService exec = Executors.newCachedThreadPool(new Fac());
        for (int i = 0; i < 10; ++i) {
            exec.execute(new DaemonThreadFactory());
        }

        Base.println("All daemon started");
        TimeUnit.MILLISECONDS.sleep(500);
        TimeUnit.MILLISECONDS.sleep(500);
    }

}
