//fibo series
#include <stdio.h>
int fibo(int n)
{
    //base criteria
    if (n<=1)
    {
        return n;
    }
    //condition
    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}
void main()
{
    int n = 9;
    // int ans = fibo(n);
    // printf("%d ",ans);
    for (int i = 1; i < n; i++)
    {
        printf("%d ",fibo(i));
    }
}