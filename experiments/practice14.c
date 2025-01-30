#include <stdio.h>
void main()
{
    int a[10] = {3,5,1,5,8,2,8,1,9,2};
    int key = 12,c = 0;
    for (int i = 0; i < 10; i++)
    {
        if (key == a[i])
        {
            printf("Element found at %d postion!",i+1);
            c++;
            break;
        }
        
    }
    if (c==0)
    {
        printf("Element not found!");
    }
    
}