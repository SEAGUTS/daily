#include <stdio.h>
void main()
{
    int a = 7, b=4,c = 3;
    if (a>b)
    {
        if (a>c)
        {
            printf("a");
        }
    }
    if (b>a)
    {
        if (b>c)
        {
            printf("b");
        }
    }
    if (c>b)
    {
        if (a<c)
        {
            printf("c");
        }
    }
}