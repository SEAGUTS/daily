#include <stdio.h>
int sum(int a[],int n)
{
    //base criteira
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return a[0]; 
    }
    return a[0] + sum(a+1,n-1);
}
void main()
{
    int a[]={2,4,6,1,4,1};
    int n = sizeof(a)/sizeof(a[0]);
    int x = sum(a,n);
    printf("%d",x);
}