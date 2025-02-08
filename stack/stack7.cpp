#include <iostream>
using namespace std;
#include <stack>
void sorting(stack<int> &s,int num)
{
    if (s.empty() || (!s.empty() && s.top() < num))
    {
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();
    sorting(s,num);
    s.push(n);
}
void sortedstack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int num = s.top();
    s.pop();
    sortedstack(s);
    sorting(s,num);
}
int main()
{
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(9);
    s.push(-1);
    s.push(-7);
    s.push(5);
    sortedstack(s);
    for (int i = 0; i < 6; i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}