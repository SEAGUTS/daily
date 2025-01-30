#include <stdio.h>
int bi(int a[],int n,int k,int s,int e)
{
    if (s>e)
    {
        return 0;
    }
    int mid = s + (e - s)/2;
    //base criteria
    if (a[mid]==k)
    {
        return 1;
    }
    if (a[mid]>k)
    {
        return bi(a,n,k,s,mid -1);
    }
    else
    {
        return bi(a,n,k,mid+1,e);
    }
        
}
void main()
{
    int a[]={1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 4;
    int s = 0,e = n;
    if (bi(a,n,k,s,e) == 1)
    {
        printf("founded");
    }
    else
    {
        printf("NOT found");
    }
    
}