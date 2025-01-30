#include <stdio.h>
void main()
{
    int a[]={2,4,6,8,10,12};
    int n = sizeof(a)/sizeof(a[0]);
    int key = 13;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==key)
        {
            printf("Postion: %d",i+1);
            c++;
            break;
        }
        
    }
    if (c==0)
    {
        printf("E");
    }
}