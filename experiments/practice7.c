#include <stdio.h>
void main()
{
    int m1[3][3],m2[3][3],m3[3][3];
    int sum;
    printf("ENTER FIRST:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&m1[i][j]);
        }
        
    }
    printf("\nENTER SECOND MATRIX:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&m2[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = m1[i][j]+m2[i][j];
            m3[i][j]=sum;
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",m3[i][j]);
        }
        printf("\n");
    }
}