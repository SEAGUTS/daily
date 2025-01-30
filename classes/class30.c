#include <stdio.h>
void main()
{
    int n,t;
    n = 34526;
    t = 0;
    
    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            continue;
        }
        else
        {
            t++;
        }
        // if (i%2 != 0)
        // {
        //     t++;
        // }
        // else
        // {
        //     continue;
        // }
        
    }
    printf("%d",t);
}