#include <stdio.h>
// void main()
// {
//     int x = 5;
//     int *p1 = &x;
//     int **p2 = &p1;
//     int ***p3 = &p2;
//     printf("%d\n",x);
//     printf("%d\n",*p1);
//     printf("%p\n",p1);
//     printf("%p\n",*p2);
//     printf("%p\n",**p3);

// }
void main()
{
    for (int i = 0; i < 100; i++)
    {
        if ((i%2==0||i%3==0))
        {
            continue;
        }
        else
        {
            printf("%d ",i);
        } 
    }
}