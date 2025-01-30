#include <iostream>
using namespace std;
void bubble(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=a[j];
            }
        }
        
    }
    
}
void smallest(int a[],int n,int m)
{
    bubble(a,n);
    for (int i = 0; i < m; i++)
    {
        if(a[i]==i)
        {
            continue;
        }
        else
        {
            cout<<i;
            break;
        }
        
    }
    
}
int main()
{
    int a[]={0, 1, 2, 8, 5, 4, 6, 7,10};
    int n=sizeof(a)/sizeof(a[0]);
    int m=12;
    smallest(a,n,m);
    return 0;
}