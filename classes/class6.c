#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of elements you want to enter:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements in the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int g = a[0];
    int s=a[0];
    for (int i = 0; i < n; i++)
    {
        if (g < a[i])
        {
            g = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s > a[i])   //2 7 2 1 8
        {
            s = a[i];
        }
    }
    printf("smaller : %d\n",s);
    printf("larger : %d\n",g);
}