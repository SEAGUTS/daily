// Date: 2021-09-30
class box{
    public
    int length;
    int breadth;
    int height;
    box()
    {
        length=10;
        breadth=20;
        height=30;
    }
    void volume()
    {
        System.out.println("volume is "+length*breadth*height);
    }
}
public class java1 {
    public static void main(String[] args) {
        System.out.println("hello world");
        System.out.print("system out");
        box b1=new box();
        b1.volume();
        box b2 = new box();
        b2.volume();
        box b3 = new box();
        b3.volume();
    }
}