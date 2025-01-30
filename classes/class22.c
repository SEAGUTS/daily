// #include<stdio.h>
// void swap(int a,int b);
// void main()
// {
//     int a,b;
//     a=100;
//     b=80;
//     printf("before swapping:a=%d and b=%d\n",a,b);
//     swap(a,b);
//     printf("after swapping:a=%d and b=%d\n",a,b);
// }
// void swap(int a,int b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     printf("values of a and b is %d %d\n",a,b);
// }
#include<stdio.h>
int swap(int *a,int *b);
void main()
{
    int a,b;
    printf("enter the values of a and b:");
    scanf("%d %d",&a,&b);
    printf("before swapping: a=%d and b=%d\n",a,b);
    printf("after swapping: a=%p and b=%p\n",&a,&b);
    swap(&a,&b);
    printf("after swapping: a=%p and b=%p\n",&a,&b);
}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("values of a and b is %d %d\n",*a,*b);
}