#include <stdio.h>
int evenodd(int a) 
{
    if (a%2 == 0)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
void oddeven(int a)
{
    if (a%2 == 0)
    {
        printf("even!");
    }
    else
    {
        printf("odd!");
    }
    
}
void main()
{
    int n = 4484;
    oddeven(n);
    int c = evenodd(n);
    if (c==2)
    {
        printf("even!");
    }
    else
    {
        printf("odd!");
    }
    
}