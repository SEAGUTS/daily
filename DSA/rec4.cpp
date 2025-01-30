#include <iostream>
using namespace std;
int stairs(int n)
{
    //base case
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return stairs(n-1) + stairs(n-2);
}
int main()
{
    int n;
    cin>>n;
    int result = stairs(n);
    cout<<result<<endl;
    return 0;
}