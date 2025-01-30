#include <iostream>
#include <string>
using namespace std;
int main()
{
    char a[]="tanmay";
    int n = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"reversed"<<endl;
    for (int i = 0; i < n/2; i++)
    {
        char temp = a[i];
        a[i]=a[n-i-1];
        a[n-i-1]= temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}