public class java16 {
    public static void main(String[] args) {
        int x;
        try {
            x=0;
            x= 1/x;
            System.out.println("This will not be printed");
        } catch (ArithmeticException e) {
            
            System.out.println("Division by Zero!"+e);
        }
        System.out.println("After catch statement.");
    }
}
