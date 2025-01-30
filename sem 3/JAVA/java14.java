interface Animal {
    void makesound();
}
class Dog implements Animal{
    public void makesound()
    {
        System.out.println("Bark!");
    }
}
public class java14 {
    public static void main(String[] args) {
        Dog a = new Dog();
        a.makesound();
    }
}
