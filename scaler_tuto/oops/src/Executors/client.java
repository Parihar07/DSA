package Executors;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class client {
    public static void main(String[] args) {
        ExecutorService exe = Executors.newFixedThreadPool(10);
        for(int i =1;i<=100;i++) {
            PrintNum printNum = new PrintNum(i);
            exe.execute(printNum);
        }
    }
}
