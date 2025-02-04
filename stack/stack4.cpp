#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &stk,int count,int N)
{
    if (count == N/2)
    {
        stk.pop();
        return;
    }
    int num = stk.top();
    stk.pop();
    solve(stk,count+1,N);
    stk.push(num);
}
void deletemid(stack <int> &stk,int N)
{
    int count = 0;
    solve(stk,count,N);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    deletemid(s,7);
    for (int i = 0; i < 7; i++)
    {
        cout<<s.top();
        s.pop();
    }
    return 0;
}