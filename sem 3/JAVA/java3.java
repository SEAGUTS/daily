class box{
    public
    double length;
    double breadth;
    double height;
    box()
    {
        length=-1;
        breadth=-1;
        height=-1;
    }
    box(double w,double h,double l)
    {
        length=l;
        breadth=w;
        height=h;
    }
    box(double s)
    {
        length=breadth=height=s;
    }
    void volume()
    {
        System.out.println("volume is "+length*breadth*height);
    }
}
public class java3 {
    public static void main(String[] args) {
        box b1=new box();
        b1.volume();
        box b2 = new box(10,20,30);
        b2.volume();
        box b3 = new box(10);
        b3.volume();
    }
}
