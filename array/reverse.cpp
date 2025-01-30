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
    int temp[n];
    int temp1;
    for (int i = 0; i < n/2; i++)
    {
        temp1=a[i];
        a[i]=a[n-1-i];
        a[n-i-1]=temp1;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
