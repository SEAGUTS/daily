interface message {
    public
    void message1();
    void message2();
}
class A implements message{
    public void message1()
    {
        System.out.println("Good Morning");
    }
    public void message2()
    {
        System.out.println("Good Evening");
    }
}
public class java12 {
    public static void main(String[] args) {
        A ob = new A();
        ob.message1();
        ob.message2();
    }
}