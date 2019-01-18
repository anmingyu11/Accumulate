package _21concurrency;

import base.Base;

public class MoreBasicThreads {

    public static void main(String[] args) {
        for (int i = 0; i < 5;++i){
            new Thread(new LiftOff()).start();
        }

        Base.println("waiting for liftOff");
    }
}
