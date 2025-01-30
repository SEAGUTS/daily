//matrix multiplication
#include <stdio.h>
void main()
{
    int r1,r2,c1,c2;
    printf("Enter number of rows and column of matrix 1:");
    scanf("%d %d",&r1,&c1);
    printf("Enter number of rows and column of matrix 2:");
    scanf("%d %d",&r2,&c2);
    if (c1!=r2)
    {
        printf("Matrix multiplication not possible!");
    }
    else
    {
        int m1[r1][c1];
        int m2[r2][c2];
        int m3[r1][c2];
        printf("enter first matrix elements:\n");
        for (int i = 0 ; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        printf("\nenter second matrix elements:\n");
        for (int i = 0 ; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }
        printf("\n multiplication begins:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                m3[i][j]=0;                            //|1 2 3| |2 3 4| |4 5 6|
                for (int k = 0; k < c1; k++)
                {
                    m3[i][j] = m3[i][j] + m1[i][k]*m2[k][j]; 
                }
                
            }
            
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ",m3[i][j]);
            }
            printf("\n");
        }
        
        
    }
    
}