class a{
    int i,j;
    a(int x,int y){
        i=x;
        j=y;
    }
    void show(){
        System.out.println("i and j: "+i+" "+j);
    }
}
class b extends a{
    int k;
    b(int x,int y,int z){
        super(x,y);
        k=z;
    }
    void show()
    {
        System.out.println("K:"+k);
        super.show(); // Calls show() of class a
    }
}
public class java8 {
    public static void main(String[] args) {
        b B = new b(1,2,3);
        B.show();
    }
}
