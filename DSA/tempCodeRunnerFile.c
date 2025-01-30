#include<stdio.h>
#define PI 3.14
void main()
{float r,a,c;
printf("enter radius:");
scanf("%f",&r);
a=PI*r*r;
c=2*PI*r;
printf("area:%f\n",a);
printf("circuference:%f",c);
}