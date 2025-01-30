#include <stdio.h>
void main()
{
    int a[] = {2,6,1,8,2,9,4};
    int n = sizeof(a)/sizeof(a[0]);
    int key = 5;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==key)
        {
            printf("found at postion : %d",i+1);
            c++;
            break;
        }
        
    }
    if (c==0)
    {
        printf("element not found!");
    }
}
//11 - 02 / palindrome greatest , smallest , linear 