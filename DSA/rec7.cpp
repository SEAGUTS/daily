#include <iostream>
using namespace std;
int answer(int a[],int n)
{
    if(n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return a[0];
    }
    int sum=a[0];
    return sum + answer(a+1,n-1);
    
}
int main()
{
    int a[]={4,5,7,3,6,2};
    int n=sizeof(a)/sizeof(a[0]);
    int result = answer(a,n);
    cout<<result<<endl;
    return 0;
}