package _21concurrency;

import base.Base;

public class BasicThreads {
    public static void main(String[] args) {
        Thread t = new Thread(new LiftOff());
        t.start();
        Base.println("waitting for liftOff");
    }
}
