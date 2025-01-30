abstract class A{
    abstract void callme();
    void callmetoo()
    {
        System.out.println("This is a concrete method");
    }
}
class B extends A{
    void callme()
    {
        System.out.println("this is A's abstract method");
    }
}
public class java10 {
    public static void main(String[] args) {
        B b = new B();
        b.callme();
        b.callmetoo();
        A c = new B();
        c.callme();
    }
}
