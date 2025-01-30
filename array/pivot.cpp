#include <iostream>
using namespace std;
void pivot(int a[],int n)
{
    int mid=n/2;
    int sum1=0,sum2=0;
    for (int i = mid+1; i < n; i++)
    {
        sum1+=a[i];
    }
    for (int i = mid-1; i >= 0; i--)
    {
        sum2+=a[i];
    }
    if(a[mid]==sum1&&a[mid]==sum2)
    {
        cout<<"pivot array!";
    }
    else
    {
        cout<<"not pivoted!";
    }
    
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    pivot(a,n);
    return 0;
}