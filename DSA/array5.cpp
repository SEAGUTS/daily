//Print all negative elements in an array.
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
    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            cout<<a[i]<<" ";
        }
        else
        {
            continue;
        }
    }
return 0;
}