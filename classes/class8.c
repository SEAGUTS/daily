//binary,roots of equation,2 - D array
//yesterday - palindrome , greatest smallest linear search
#include <stdio.h>
void main()
{            //0 1 2 3  4  5 
    int a[] = {2,4,6,8,10,12};   //start 5 end 4
    int n = sizeof(a)/sizeof(a[0]);   //6
    int start = 0;
    int end = n;
    int key = 11;
    int c=0;
    while (start<=end)   
    {
        int mid = start + (end - start)/2;  //3
        if (a[mid]==key)
        {
            printf("postion: %d",mid+1);
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
