// insertion
#include <stdio.h>
void main()
{
    int a[] = {2, 4, 6, 5, 7, 1, 3, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while ((j >= 0) && (a[j] > a[j + 1]))
        {
            a[j + 1] = a[j];
            a[j] = key;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}