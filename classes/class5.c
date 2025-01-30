#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of elements you want to enter:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements in the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int flag = 0;
    for (int i = 0; i < n/2; i++)
    {
        if(a[i]!=a[n-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("palindrome");
    }
    if(flag == 1)
    {
        printf("not at all");
    }
    // for (int i = 0 ,int j = n-1; i < n/2 , j >= n/2; i++,j--)
    // {
    //     if (a[i]!=a[j])
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }
    // if(flag == 0)
    // {
    //     printf("palindrome");
    // }
    // if(flag == 1)
    // {
    //     printf("not at all");
    // }
    
}