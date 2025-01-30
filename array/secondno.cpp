#include <iostream>
using namespace std;
void sortingarray(int a[],int n)
{
    int i,j,key;
    for (int i = 1; i < n; i++)
    {
        key=a[i];
        j=i-1;
        while ((j>=0 && a[j]>key))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}
int main()
{
    int a[]={3,2,6,1,9,7};
    int n=sizeof(a)/sizeof(a[0]);
    sortingarray(a,n);
    return 0;
}