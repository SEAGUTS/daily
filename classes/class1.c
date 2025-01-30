#include <stdio.h>
void main()
{
    //       0 1 2 3 4
    int a[]={1,0,1,0,1};
    int n;
    n = sizeof(a)/sizeof(a[0]);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("%d\n",sum);
    for (int i = 0; i < n/2; i++)
    {
        int temp = a[i];     // temp = 2
        a[i] = a[n-i-1];     // a[0] = 5
        a[n-i-1]= temp;     // a[5] = 2
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
}