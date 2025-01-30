#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int start=0;
    int end=n;
    int key,c=0;
    scanf("%d",&key);
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==key)
        {
            printf("Postion: %d",mid+1);
            c++;
            break;
        }
        if (a[mid]>key)
        {
            end=mid-1;
        }
        if (a[mid]<key)
        {
            start=mid+1;
        }
    }
    if(c==0)
    {
        printf("Elment not found!");
    }
    
}
