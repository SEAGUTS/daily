#include <stdio.h>
int factorial(int n)
{
    //base case
    if (n==0)
    {
        return 1;
    }
    //condition
    int x = n * factorial(n-1);
    return x;
}
void main()
{
    int x = 5;
    int y = factorial(x);
    printf("%d",y);
}