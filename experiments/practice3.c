#include <stdio.h>
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    int ans = fibo(n-1) + fibo (n-2);
    return ans;
}
void main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",fibo(i));
    }
    
    // int result = fibo(n);
    // printf("%d",result);
}