package _21concurrency;

import java.util.concurrent.TimeUnit;

import base.Base;

public class SimpleDaemons implements Runnable {
    @Override
    public void run() {
        try {
            while (true) {
                TimeUnit.MILLISECONDS.sleep(100);
                Base.println(Thread.currentThread() + " " + this);
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
            Base.print("sleeo() interrupted");
        }
    }

    public static void main(String[] args) throws InterruptedException {
        for (int i = 0 ; i < 10;++i){
            Thread daemon = new Thread(new SimpleDaemons());
            daemon.setDaemon(true);
            daemon.start();
        }
        Base.println("all daemon started");
        TimeUnit.MILLISECONDS.sleep(50);
    }
}
