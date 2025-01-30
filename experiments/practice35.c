#include <stdio.h>
void main()
{
    int min,temp;
    int a[] = {3,5,6,2,1,7,3};
    int n = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[min]>a[j])
            {
                min = j;
            }
            
        }
        if (min!=i)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}