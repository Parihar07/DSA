package methodoverriding;

public class methodoveriding {
    public static void main(String[] args) {
        A a = new A();
        a.dosomething();
        a = new B();
        a.dosomething();

    }


}
