#include <stdio.h>
void main()
{
    int a[]={1,0,1,1,0,1};
    int n = sizeof(a)/sizeof(a[0]);
    int i,j,flag = 0;
    for (i = 0,j=n-1; i < n/2 , j>=n/2; i++,j--)
    {
        if (a[i]!=a[j])
        {
            flag =1;
            break;
        }
        
    }
    if (flag == 1)
    {
        printf("NP");
    }
    if (flag== 0)
    {
        printf("p");
    }
    
}