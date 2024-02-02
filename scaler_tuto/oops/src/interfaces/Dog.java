package interfaces;

public class Dog implements Animal
{
    @Override
    public void walk() {
        System.out.println("Dog is walking");
    }

    @Override
    public void eat() {
        System.out.println("Dog.eat");
    }

    @Override
    public void run() {
        System.out.println("Dog.run");
    }
}
