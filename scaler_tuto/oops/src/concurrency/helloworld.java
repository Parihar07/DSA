package concurrency;

public class helloworld implements Runnable{

    @Override
    public void run() {
        System.out.println("In other thread " + Thread.currentThread().getName());
    }
}
