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
    int key,c=0;
    scanf("%d",&key);
    for (int i = 0; i < n; i++)
    {
        if(a[i]==key)
        {
            printf("postion:%d",i+1);
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("Element not found!");
    }
    
}