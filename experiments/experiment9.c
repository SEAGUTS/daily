#include <stdio.h>
void main()
{
    int n = 20;
    double temp = 1;
    for (int i = 1; i <= n; i++)
    {
        temp = temp * i;
    }
    
    printf("%lf",temp);
}