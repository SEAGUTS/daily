#include <stdio.h>
void main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    int key = 1;
    int start = 0;
    int end = n;
    int c = 0;
    while(start<=end)
    {
        int mid = start + (end -start)/2;
        if (a[mid]==key)
        {
            printf("Element found at %d postion!",mid+1);
            c++;
            break;
        }
        if (a[mid]>key)
        {
            end = mid - 1;
        }
        if (a[mid]<key)
        {
            start = mid + 1;
        }
        
    }
    if (c==0)
    {
        printf("Element not found!");
    }
    
}