#include <iostream>
using namespace std;
int main()
{
    int a,i=1;
    cout<<"enter positive number:";
    cin>>a;
    long sum=0;
    while (i<=a)
    {
        sum+=i++;
        cout<<"the sum of the first '"<<a<<"' integers is "<<sum<<endl;
    }
    
    return 0;
}