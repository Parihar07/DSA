package printNumbers;

public class client {
    public static void main(String[] args) {

        for(int i =1;i<=100;i++) {
            PrintNum printNum = new PrintNum(i);
            Thread t = new Thread(printNum);
            t.start();
        }
    }
}
