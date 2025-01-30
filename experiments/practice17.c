#include <stdio.h>
void main()
{
    int a[] = {3, 5, 1, 5, 8, 2, 8, 1, 9, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j+1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}