#include <stdio.h>
void reverse(int *a,int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp = *(a+i);
        *(a+i)= *(a+(n-1-i));  //a[i] = a[n-1-i]
        *(a+(n-1-i))= temp;
    }
   
    
}
void main()
{
    int a[5]={4,6,2,5,8};
    int *p1 = &a[0];
    int n = 5;
    reverse(p1,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}