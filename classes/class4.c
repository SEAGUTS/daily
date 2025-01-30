#include <stdio.h>
void main()
{
    int a = 5;
    printf("%d\n",++a);   //6
    int b = ++a + a++ - --a + a--;
    printf("%d\n",b);
    int c = a++ + b--;    
    printf("%d %d %d",a,b,c);
    //doubt
    // int a[10]={1,2,3,4,5,6,7,8,9,10};
    // printf("%p\n",&a[9]);
    // printf("%p\n",&a[10]);
    // int *ptr1;
    // ptr1 = &a[10];
    // *ptr1 = 1;
    // int *ptr2;
    // ptr2 = &a[11];
    // *ptr2 = 2;
    // for (int i = 0; i <= 11; i++)
    // {
    //     printf("%d ",a[i]);
    // }
    
}