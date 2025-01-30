#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a1[n][m];
    int a2[n][m];
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a1[i][j]);
        }
        
    }
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a2[i][j]);
        }
        
    }
    int sum[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i][j]=a1[i][j]+a2[i][j];
        }
        
    }
    printf("Calculation begins:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}