#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of elements you want to add:");
    scanf("%d", &n);
    int a[n], temp;
    printf("\nEnter the Array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nArray before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nSorting Begins:");
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n - i ; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    printf("\nArray after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}