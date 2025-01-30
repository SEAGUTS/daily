#include <stdio.h>
void main()
{
    int m1,n1,m2,n2,m3,n3;
    scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
    n3 = n1,m3 = m1;
    int a1[n1][m1];
    int a2[n2][m2];
    int a3[n3][m3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            scanf("%d",&a1[i][j]);
        }
        
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            scanf("%d",&a2[i][j]);
        }
        
    }
    
}