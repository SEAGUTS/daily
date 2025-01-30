#include <iostream>
using namespace std;
int triangle(int a[],int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (a[i]+a[j]>a[k]&&a[i]+a[k]>a[j]&&a[k]+a[j]>a[i])
                {
                    count++;
                }
                
            }
            
        }
        
    }
    return count;
    
}
int main()
{
    int a[] = { 10, 21, 22, 100, 101, 200, 300 };
    int n=sizeof(a)/sizeof(a[0]);
    int m=triangle(a,n);
    cout<<m;
    return 0;
}