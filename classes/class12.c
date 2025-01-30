//bubble sorting
#include <stdio.h>
void main()
{
    int a[] = {6,1,8,2,9,3,5};
    int n = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }    
        }  
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    } 
}