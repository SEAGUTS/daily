#include <stdio.h>
int fact(int x)
{
    if (x==0)
    {
        return 1;
    }
    int result =  x * fact(x-1);
    return result;
}
void main()
{
    printf("Enter the number: ");
    int x;
    scanf("%d",&x);
    int result = fact(x);
    printf("result: %d",result);
}