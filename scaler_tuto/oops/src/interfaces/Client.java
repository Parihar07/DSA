package interfaces;

public class Client {
    public static void main(String[] args) {
        Animal animal = new Dog();
        animal.eat();
        animal.walk();
        animal.run();
    }
}
