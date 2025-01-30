#include <iostream>
using namespace std;
void printvalue(int *p)
{
    cout<<&p<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
}
void update(int *p)
{
    cout<<p+1<<endl;
    cout<<*p+1<<endl;
    cout<<*(p+1)<<endl;
}
int getsum(int a[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=i[a];
    }
    return sum;
}
int main()
{
    // int value = 5;
    // int *p1 = &value;
    // printvalue(p1);
    // update(p1);
    int a[5]={1,2,3,4,5};
    cout<<getsum(a+2,3);
    return 0;
}