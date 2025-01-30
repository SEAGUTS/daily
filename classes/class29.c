#include <stdio.h>
int print(int a[],int n)
{
    //base criteria
    if (n==1)
    {
        printf(" %d ",a[0]);
    }
    printf("%d ",print(a+1,n-1));
}
void main()
{
    int a[] = {1, 2, 3, 6, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int ans = print(a,n);
    printf("%d ",ans);
}