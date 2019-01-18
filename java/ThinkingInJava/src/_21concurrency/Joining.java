package _21concurrency;

import base.Base;

class Sleeper extends Thread {
    private int duration;

    public Sleeper(String name, int duration) {
        super(name);
        this.duration = duration;
        start();
    }

    @Override
    public void run() {
        try {
            sleep(duration);
        } catch (InterruptedException e) {
            Base.println(getName() + " is interrupted. " + " isInterrupted() " + isInterrupted());
        }

        Base.println(getName() + " has awakened");
    }
}

class Joiner extends Thread {

    private Sleeper sleeper;

    public Joiner(String name, Sleeper sleeper) {
        super(name);
        this.sleeper = sleeper;
        start();
    }

    @Override
    public void run() {
        super.run();
        try {
            sleeper.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
            Base.println("Interrupted");
        }
        Base.println(getName() + " join completed");
    }
}

public class Joining {

    public static void main(String[] args) {
        Sleeper s1 = new Sleeper("s1", 1500);
        Sleeper s2 = new Sleeper("s2", 1500);
        Joiner j1 = new Joiner("j1", s1);
        Joiner j2 = new Joiner("j2", s2);
        s2.interrupt();
    }
}
