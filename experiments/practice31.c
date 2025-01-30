#include <stdio.h>
void main()
{
    int low,high,flag,i;
    printf("enter the intervals:");
    scanf("%d %d",&low,&high);
    while (low<high)
    {
        flag = 0;
        for (i = 2; i < low; i++)
        {
            if (low % i == 0)
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            printf("%d ",low);
            low++;
        }
    }
}