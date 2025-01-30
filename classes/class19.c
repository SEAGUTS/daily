#include <stdio.h>  //function decelaration
int add1(int *a,int *b)    //funtion defination    //formal parameters
{
    *a = 6;
    return *a+*b;
}
void add2(int a,int b)
{
    int c = a+b;
    printf("%d",c);
}
void main()
{
    int a = 7 , b = 5;
    int c = add1(&a,&b);     //actual parameters
    printf("%d\n",c);
    add2(a,b);
    printf("\n%d",a);
    //a1 b1
    //a b
    //a1 = a b1 = b
    //a1++;
    // a = 101 = 5     b = 102   ptr = 101 a = 5  ptr = 6 
    int *ptr1;
    ptr1 = &a;
    printf("\n");
    printf("%p\n",ptr1);
    *ptr1 = *ptr1+1;
    // printf("%d\n",*ptr1+1);
    printf("%d\n",a);
}