#include <stdio.h>
int issorted(int a[], int n)
{
    // base criteria
    if (n == 0 || n == 1)
    {
        return 1;
    }
    if (a[0] > a[1])
    {
        return 0;
    }
    else
    {
        return issorted(a + 1, n - 1);
    }
}
void main()
{
    int a[] = {1, 2, 3, 6, 5};
    int n = sizeof(a) / sizeof(a[0]);
    if (issorted(a, n) == 1)
    {
        printf("SORTED");
    }
    if (issorted(a, n) == 0)
    {
        printf("NOT SORTED");
    }
}