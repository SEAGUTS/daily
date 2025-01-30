// factorial
    // int n = 7,pro = 1;
    // for (int i = n; i>=1; i--)
    // {
    //     pro = pro * i;
    // }
    // printf("%d",pro);
//palindrome
    // int n1 = 0, n2 = 1,n3,n= 6;
    // printf("%d ",n2);
    // for (int i = 0; i < n; i++)
    // {
    //     n3 = n1+n2;
    //     printf("%d ",n3);
    //     n1 = n2;
    //     n2 = n3;
    // }
//reverse a number
    // int n,rev = 0,lastdigit;
    // n = 78;
    // while (n>0)
    // {
    //     lastdigit = n%10;
    //     rev = rev *10 + lastdigit;
    //     n = n/10;
    // }
    // printf("%d",rev);
//reverse array    
    // int a[] = {3,5,6,2,1,7,3};
    // int n = sizeof(a)/sizeof(a[0]);
    // for (int i = 0; i < n/2; i++)
    // {
    //     int temp = a[i];
    //     a[i] = a[n- i -1];
    //     a[n - i- 1] = temp;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",a[i]);
    // }
//sum of digits
    // int sum = 0,rim = 0,n = 58;
    // while (n>0)
    // {
    //     rim = n%10;
    //     sum = sum + rim;
    //     n = n/10;
    // }
    // printf("%d",sum);
//max min in array
    // int a[] = {34,74,2,6,9,2,5,13};
    // int n = sizeof(a)/sizeof(a[0]);
    // int min = a[0];
    // for (int i = 1; i < n; i++)
    // {
    //     if (min>a[i])
    //     {
    //         min = a[i];
    //     }
        
    // }
    // printf("%d",min);
//matrix addition
    // int n1 = 2,n2 = 1,m1 = 2,m2 = 2;
    // int a1[n1][m1];
    // int a2[n2][m2];
    // int sum = 0;
    // if ((n1==n2)&&(m1==m2))
    // {
    //     for (int i = 0; i < n1; i++)
    //     {
    //         for (int j = 0; j < m1; j++)
    //         {
    //             scanf("%d",&a1[i][j]);
    //         }
            
    //     }
    //     for (int i = 0; i < n1; i++)
    //     {
    //         for (int j = 0; j < m1; j++)
    //         {
    //             scanf("%d",&a2[i][j]);
    //         }
            
    //     }
    //     for (int i = 0; i < n1; i++)
    //     {
    //         for (int j = 0; j < m1; j++)
    //         {
    //             sum = 0;
    //             sum = a1[i][j] + a2[i][j];
    //             printf("%d ",sum);
    //         }
    //         printf("\n"); 
    //     }
        
    // }
    // else
    // {
    //     printf("cant do additin");
    // }
//matrix traces
    // int n1 = 2,m1 = 4,traces = 0;
    // int a[n1][m1];
    // if (n1==m1)
    // {
    //     for (int i = 0; i < n1; i++)
    //     {
    //         for (int j = 0; j < m1; j++)
    //         {
    //             scanf("%d",&a[i][j]);
    //         }
            
    //     }
    //     for (int i = 0; i < n1; i++)
    //     {
    //         for (int j = 0; j < m1; j++)
    //         {
    //             if (i==j)
    //             {
    //                 traces = traces + a[i][j];
    //             }
                
    //         }
            
    //     }
    //     printf("%d",traces);
    // }
    // else
    // {
    //     printf("fg");
    // }
//roots
#include <stdio.h>
#include <math.h>
void main()  
{
    int a = 1,b = -5,c = 5;
    double disc;
    disc = b*b - 4*a*c;
    if (disc>0)
    {
        double r1,r2;
        r1 = (-b + sqrt(disc))/(2*a);
        r2 = (-b - sqrt(disc))/(2*a);
        printf("%lf %lf",r1,r2);

    }
    if (disc == 0)
    {
        double r1;
        r1 = (-b)/(2*a);
    }
    if (disc < 0)
    {
        double r1,img1;
        r1= (-b)/(2*a);
        img1 = sqrt(-disc)/(2*a);
        printf("%lf + %lfi : %lf - %lfi",r1,img1,r1,img1);

    }
    
    
}