#include <stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int ar[a][b][c];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b ; j++)
        {
            for ( int k = 0; k < c; k++)
            {
                scanf("%d",&ar[i][j][k]);
            }
            
        }
        
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                printf("%d ",ar[i][j][k]);
            }
            
        }
        
    }
    
}