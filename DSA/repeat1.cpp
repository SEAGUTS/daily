#include <iostream>
using namespace std;
int count(int a[],int n)
{
    int m = a[0],k = 0;
    for (int i = 0; i < n; i++)
    {
        if (m>a[i])
        {
            m = a[i];
            k = i;
        }
        
    }
    return k;
}
int main()
{
    int a[] = {7,4,1,7,3,2};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<count(a,n);
    return 0;
}