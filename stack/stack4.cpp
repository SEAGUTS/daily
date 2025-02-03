#include <iostream>
#include <stack>
using namespace std;
void solve(stack <int> &s,int count,int N)
{
    if (count == N/2)
    {
        s.pop();
        return;
    }
    int num = s.top();
    s.pop();
    solve(s,count+1,N);
}
void deletemid(stack <int> &s,int N)
{
    int count = 0;
    solve(s,count,N);
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
    deletemid(s,s.size());
    cout<<s.size();
    return 0;
}