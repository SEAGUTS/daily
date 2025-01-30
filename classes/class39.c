#include <stdio.h>
void swap1(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    // printf("a = %d b = %d \n",a,b);
}
void main()
{
    int a = 5 , b = 7;
    printf("a = %d b = %d \n",a,b);
    // int temp = a;
    // a = b;
    // b = temp;
    swap1(&a,&b);
    printf("a = %d b = %d \n",a,b);
}