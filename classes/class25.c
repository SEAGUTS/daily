#include <stdio.h>
int power(int m,int n)
{
    //base criteria
    if(n==0)
    {
        return 1;
    }
    int x = m * power(m,n-1);
    return x;
}
void main()
{
    int m = 12 , n = 4;
    int x = power(m,n);
    printf("%d ",x);
}