package tests;

import java.io.IOException;
import java.util.concurrent.TimeUnit;

public class SleepThreadddddd {

    public static void main(String[] args) throws IOException {

        Thread t = new DemoThread();
        // 启动线程
        t.start();
        System.in.read();
    }

    static class DemoThread extends Thread {

        @Override
        public void run() {
            try {
                TimeUnit.HOURS.sleep(1);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
