//selection sorting
#include <Stdio.h>
void main()
{
    int a[]={67,34,9,23,1,47};
    int n = sizeof(a)/sizeof(a[0]);
    int min,temp;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
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