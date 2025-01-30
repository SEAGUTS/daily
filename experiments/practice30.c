#include <stdio.h>
void main()
{
    int num1 = 0, num2 = 1,num3,n;
    printf("enter number of times:");
    scanf("%d",&n);
    printf("%d\n",num2);
    for (int i = 0; i < n; i++)
    {
        num3 = num1 + num2;
        printf("%d\n",num3);
        num1 = num2;
        num2 = num3;
    }
    
}