#include <stdio.h>
void reverse(int a[],int n)
{
    int temp ,i;
    for (i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}
void main()
{
    int a[] = {3,5,7,1,2};
    int n = sizeof(a)/sizeof(a[0]);
    reverse(a,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
        printf("%p ",&a[i]);
    }
    // printf("\n%p",&a[1]);
}