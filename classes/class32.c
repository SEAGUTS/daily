#include <stdio.h>
int linear(int a[],int n,int k)
{
    //base criteria
    if (n == 0)
    {
        return 0;
    }
    if (a[0] == k)
    {
        return 1;
    }
    else
    {
        return linear(a+1,n-1,k);
    }
    
}
void  main()
{
    int a[]={6,3,1,7,9,2};
    int n = sizeof(a)/sizeof(a[0]);
    int key = 4;
    if (linear(a,n,key) == 1)
    {
        printf("founded");
    }
    else
    {
        printf("NOT found");
    }
    
}