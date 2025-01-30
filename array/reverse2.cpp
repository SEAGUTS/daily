#include <iostream>
using namespace std;
void shifting(int a[], int n, int d)
{
    int temp[n];
    for (int i = 0; i < n - d; i++)
    {
        temp[i] = a[i + d];
    }
    for (int i = 0; i < d; i++)
    {
        temp[(n - d) + i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d;
    cin >> d;
    int k;
    cin>>k;
    int l=0;
    for (int i = 0; i < k; i++)
    {
        shifting(a, n, d);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}