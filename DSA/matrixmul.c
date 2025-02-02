#include<stdio.h>
int main()
{
    int row1,row2,col1,col2;
    printf("enter the row1 and col1: ");
    scanf("%d %d",&row1,&col1);
    printf("enter the row2 and col2: ");
    scanf("%d %d",&row2,&col2);
    int m1[row1][col1];
    int m2[row2][col2];
    int m3[row1][col2];
    if(col1!=row2)
    {
        printf("matrix multiplication is not possible.");
        return -1;
    }
    printf("enter the elements of 1st matrix:");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("enter the elements of 2st matrix: ");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }  
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            m3[i][j]=0;
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k=0 ; k < col1; k++)
            {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }  
    }
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < row1; i++) 
    {
        for (int j = 0; j < col2; j++) 
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}