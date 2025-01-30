class box
{
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
    // box(double w,double h,double l)
    // {
    //     length=l;
    //     breadth=w;
    //     height=h;
    // }
    box(double length,double breadth,double height)
    {
        this.length=length;
        this.breadth=breadth;
        this.height=height;
    }
    void volume()
    {
        System.out.println("volume is "+length*breadth*height);
    }
}
public class java4 {
    public static void main(String[] args) {
        box b1=new box(10,20,30);
        b1.volume();
    }
}
