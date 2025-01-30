#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sortingarray(int a[],int n)
{
    int i,j,key;
    for ( i = 1; i < n; i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
void threenumber(int a[],int n)
{
    for (int i = n-3; i<n ; i++)
    {
        cout<<a[i]<<" ";
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
    sortingarray(a,n);
    threenumber(a,n);
    
    return 0;
}