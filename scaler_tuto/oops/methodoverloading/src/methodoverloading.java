public class methodoverloading {
    static class A{
    String name;
    void hello(){
        System.out.println("hello");
    }
    void hello(String str){
        System.out.printf("hello %s\n",str);
    }
    }
}
