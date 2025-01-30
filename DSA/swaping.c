#include <stdio.h>
void swap(int a,int b);
void main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    swap(a,b);//actuall parameter
    printf("Swapped number: a = %d b = %d \n",a,b); //call by value
}
void swap(int a,int b) //formal paarameter
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Swapped number: a = %d b = %d",a,b); //call be refrence
}