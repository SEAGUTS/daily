#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int d;
    cin>>d;
    int p=1;
    while (p<=d)
    {
        int last=a[0];
        for (int i = 0; i < n-1; i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=last;
        p++;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}