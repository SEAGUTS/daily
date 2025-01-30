#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    int fun;
    cout<<"enter your number:"<<endl;
    cin>>a;
    cout<<"which operation you want (square-2,cube-3,quad-4):"<<endl;
    cin>>fun;
    if (fun==2)
    {
        b=a*a;
        cout<<"your square of number is:"<<b;
    }
    else
    {
        if (fun==3)
        {
            c=a*a*a;
            cout<<"your cube of number is:"<<c;
        
        }
        else
        {
            d=a*a*a*a;
            cout<<"your quad of number is:"<<d;
        }
        
    }
    return 0;
}