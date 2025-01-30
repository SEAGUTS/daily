#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    printf("Enter values of a,b,c from quadratic equation(ax^2+bx+c=0):");
    scanf("%d %d %d",&a,&b,&c);
    int d = (b*b) - (4*a*c);
    if (d>0)
    {
        int root1 = (-b + sqrt(d))/(2 * a);
        int root2 = (-b - sqrt(d))/(2 * a);
        printf("two real roots are : root1 = %d and root2 = %d",root1,root2);
    }
    if (d==0)
    {
        int root1= -b/(2*a);
        printf("two equal and real roots are: root1 = %d and root2 = %d",root1,root1);
    }
    if (d<0)
    {
        int realpart = -b/(2*a);
        int imaginepart = sqrt(-d)/(2*a);
        printf("two imaganiary roots are: root1 = %d + %di and root2 = %d - %di",realpart,imaginepart,realpart,imaginepart);
    }
    
}