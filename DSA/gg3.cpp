#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"enter the numbers"<<endl;
    cin>>n1>>n2>>n3;
    if (n1<n2)
    {
        if (n1<n3)
        {
            cout<<"their minimum numbers is:"<<n1<<endl;
        }
        else
        {
            cout<<"their minimum is:"<<n3<<endl;
        }
        
    }
    else
    {
        if (n2<n3)
        {
            cout<<"their number is:"<<n2<<endl;
        }
        else
        {
            cout<<"their minimum is:"<<n3<<endl;
        }
        
    }
    
}