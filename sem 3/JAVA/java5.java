class java5{
    public
    static int a = 5;
    static int b = 10;
    static int c;
    
    static void display()
    {
        System.out.println("a = "+a);
        System.out.println("b = "+b);
        System.out.println("c = "+c);
    }
    static
    {
        System.out.println("static block initialized");
        c = a+b;
    }
    public static void main(String[] args) {
        display();
    }
}