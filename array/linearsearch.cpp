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
    int m;
    cout<<"enter the value:";
    cin>>m;
    for (int i = 0; i<n; i++)
    {
        if (a[i]==m)
        {
            cout<<"value is in "<<i+1<<" postion!";
        }   
    }
    return 0;
}