#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i, j, temp;
    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf(" insertion sort begins:\n");
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            a[j] = temp;
            j--;
        }
        a[j + 1] = temp;
    }
    printf("soreted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}