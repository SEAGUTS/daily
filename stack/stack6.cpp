#include <iostream>
#include <stack>
#include <string>
using namespace std;
void pushing(stack<int> &s,int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int y = s.top();
    s.pop();
    pushing(s,x);
    s.push(y);
}
void printf(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int x = s.top();
    // cout<<x<<endl;
    s.pop();
    cout<<x<<endl;
    printf(s);
    s.push(x);
}
int main()
{
    stack<int> x;
    x.push(1);
    x.push(2);
    x.push(3);
    x.push(4);
    x.push(5);
    x.push(6);
    cout<<"Before adding:"<<endl;
    printf(x);
    pushing(x,10);
    cout<<"after pushed:"<<endl;
    printf(x);
    return 0;
}