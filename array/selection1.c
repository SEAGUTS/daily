#include <stdio.h>
void main()
{
    int n,min,temp;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        min=i;
        for (int j = i+1; j < n; j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=a[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
}