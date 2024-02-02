package printNumbers;

public class PrintNum implements Runnable{
    int printNum;
    PrintNum(int i){
        this.printNum=i;
    }
    @Override
    public void run() {
        System.out.println("Number -" +printNum + "thred : " + Thread.currentThread().getName());
    }
}
