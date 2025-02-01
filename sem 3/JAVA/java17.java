public class java17 {
    public static void main(String[] args) {
        int 
        
        y = 0;
        try {
            if (y==0) {
                throw new ArithmeticException();
            }
        } catch (ArithmeticException e) {
            System.out.println("Exception occured: division by zero! "+e);
        }
    }
}
