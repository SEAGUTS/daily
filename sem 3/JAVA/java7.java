class A{
    int i;
    int j;
    void setij(int x,int y){
        i=x;
        j=y;
    }
}
class B extends A{
    int total;
    void sum(){
        total=i+j;
    }
}
public class java7 {
    public static void main(String[] args) {
        B sub = new B();
        sub.setij(10,12);
        sub.sum();
        System.out.println("Total is: "+sub.total);
    }
}
