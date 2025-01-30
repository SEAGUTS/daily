#include <stdio.h>
void main()
{
    int n;
    int max,min;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0],min=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        if (a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("%d\n",max);
    printf("%d",min);
}