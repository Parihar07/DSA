package concurrency;

public class main {
    public static void main(String[] args) {
        System.out.println("just main thread-" + Thread.currentThread().getName());

        helloworld obj = new helloworld();
        Thread T1 = new Thread(obj);
        T1.start();
    }
}
