interface Calculator
{
    void add(int x,int y);
    void sub(int x,int y);
    void mul(int x,int y);
    void div(int x,int y);
}
class SimpleCalculator implements Calculator{
    public void add(int x,int y)
    {
        System.out.println("Addition:"+(x+y));
    }
    public void sub(int x,int y)
    {
        System.out.println("Subtraction:"+(x-y));
    }
    public void mul(int x,int y)
    {
        System.out.println("Multipication:"+(x*y));
    }
    public void div(int x,int y)
    {
        if (y!=0) {
            System.out.println("Division:"+(x/y));
        }
        else
        {
            System.out.println("Dinominator is Zero!");
        }
    }
}
public class java15 {
    public static void main(String[] args) {
        SimpleCalculator s = new SimpleCalculator();
        s.add(5, 3);
        s.sub(6, 2);
        s.mul(4, 9);
        s.div(5, 3);
        s.div(9, 0);
    }
}
