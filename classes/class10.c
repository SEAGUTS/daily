//2 - d array
#include <stdio.h>
void main()
{
    int r1,r2,r3,c1,c2,c3;
    printf("Enter number of rows and columns of both the matrix(matrix 1,matrix 2):");
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    r3 = r1;
    c3 = c1;
    int m1[r1][c1];
    int m2[r2][c2];
    int m3[r3][c3];
    int sum = 0;
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
    printf("\nAddition begins:\n");
    for (int i = 0 ; i < r3; i++)
    {
        for (int j = 0; j < c3; j++)
        {
            sum = m1[i][j] + m2[i][j];
            printf("%d ",sum);
        }
        printf("\n");
    }
}