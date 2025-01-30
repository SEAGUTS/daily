#include <stdio.h>
void main()
{
    int a[]={1,0,1,0,1};
    int n = sizeof(a)/sizeof(a[0]);
    int odd = 0,even = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("even = %d and odd = %d",even,odd);
}
    // printf("%d",n);
    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i]>=1 && a[i]<=9 || a[i]==0)
    //     {
    //         count++;
    //     }
        
    // }
    // printf("%d",count);
    // char a = 'a';
    // printf("%d",sizeof(a));