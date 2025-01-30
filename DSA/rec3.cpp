#include <iostream>
using namespace std;
// void fibo(int n)
// {
//     if(n==0)
//     {
//         return ;
//     }
//     int n1=0,n2=1,n3;
//     n3=n1+n2;
//     n1=n2;
//     n2=n3;
//     cout<<n1<<n2;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     fibo(n);
//     return 0;
// }
int fibo(int n)
{
    // if (n==0)
    // {
    //     return 0;
    // }
    // if (n==1)
    // {
    //     return 1;
    // }
    if (n<=1)
    {
        return n;
    }
    
    int ans = fibo(n-1) + fibo (n-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    cout<<fibo(i)<<endl;
    // int result = fibo(n);
    // cout<<result<<endl;
    return 0;
}