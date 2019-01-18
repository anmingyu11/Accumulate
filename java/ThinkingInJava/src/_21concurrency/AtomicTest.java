package _21concurrency;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

import base.Base;

public class AtomicTest implements Runnable {
    private int i = 0;

    public int getValue() {
        return i;
    }

    private synchronized void evenIncrement() {
        i++;
        i++;
    }

    @Override
    public void run() {

        while (true) {
            evenIncrement();
        }

    }

    public static void main(String[] args) throws InterruptedException {
        ExecutorService exec = Executors.newCachedThreadPool();
        AtomicTest at = new AtomicTest();
        exec.execute(at);
        TimeUnit.SECONDS.sleep(1);
        while (true) {
            int val = at.getValue();
            if (val %2 ==0){
                Base.println(val);
                System.exit(0);
            }
        }
    }
}
