#include <stdio.h>
void binarysearch(int *a,int n,int key,int start,int end)
{
    int  c = 0;
    while (start<=end)
    {
        int mid = start + (end - start)/2;
        if (a[mid]==key)
        {
            printf("postion: %d",mid+1);
            c++;
            break;
        }
        if (a[mid]>key)
        {
            end = mid-1;
        }
        if (a[mid]<key)
        {
            start = mid + 1;
        }  
    }
    if (c==0)
    {
        printf("E0");
    }
    
    
    
}
void main()
{
    int a[]={2,4,6,8,10,12};
    int n = sizeof(a)/sizeof(a[0]);
    int key = 12;
    int start = 0;
    int end = n;
    binarysearch(a,n,key,start,end);

}