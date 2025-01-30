#include <stdio.h>
void main()
{
    int a = 5;
    int b = a++ + ++a ;
    int c = a + b++;
    printf("%d %d %d",a,b,c);
    printf("\n");
    int a1[]={1,2,3,4,5};
    printf("%d\n",a1);
    printf("%d\n",&a1[0]);
    // a++;
    // printf("%d\n",a++);
    // printf("%d",a);3

}
// array - size,reverse,even odd,increment decrement,address,array address 10/02
//  11/02 - palindrome , greatest , smallest ,linear search
// 1-d , 2-d , searching,sorting, roots of equation , order of complexcity , character array and strings

// int a[10];
// int *ptr1;
// ptr1 = &a[11];
// *ptr1 = 1;
// printf("%d",a[11]);