#include <iostream>
using namespace std;
bool issorted(int a[],int n)
{
    if (n==1||n==0)
    {
        return true;
    }
    // if (i==1)
    // {
    //     cout<<"sorted"<<endl;
    // }
    
    // if (a[n-i]<a[n-i+1])
    // {
    //     issorted(a,n,i-1);
    // }
    if (a[0]>a[1])
    {
        return false;
    }
    else
    {
        return issorted(a+1,n-1);
    }
    
    
}
int main()
{
    int a[]={2,4,5,6,9,9,9};
    int n=sizeof(a)/sizeof(a[0]);
    bool ans = issorted(a,n);
    if (ans==true)
    {
        cout<<"sorted"<<endl;
    }
    else
    {
        cout<<"not sorted"<<endl;
    }
    
    
    return 0;
}