#include <stdio.h>
int sum(int n)
{
    //base criteria
    if (n == 1)
    {
        return n;
    }
    //condition 
    int ans = n;
    return ans + sum(n-1);
}
void main()
{
    int n = 9;
    int ans = sum(n);
    printf("%d",ans);
}