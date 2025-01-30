#include <stdio.h>
// int fact(int n);
// int fact(int n)
// {
//     if (n==1)
//     {
//         return 1;
//     }
//     return n * fact(n-1);
// }
// int fibo(int n)
// {
//     if (n<=1)
//     {
//         return 1;
//     }
//     return fibo(n-1) + fibo(n-2);
// }
// void main()
// {
//     int n = 7;
//     // printf("%d",fibo(n));
//     for (int i = 1; i < n; i++)
//     {
//         printf("%d ",fibo(i));
//     }
    
// }
void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}
#include <stdio.h>
void main()
{
    int a = 7 , b = 5;
    swap(a,b);
    printf("%d %d",a,b);
}