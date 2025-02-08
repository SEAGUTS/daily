// baracets question
#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isvalid(string s)
{
    stack<char> stk;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            stk.push(ch);
        }
        else
        {
            if (!stk.empty())
            {
                char top = stk.top();
                if (((ch == ']') && (top == '[')) || ((ch == '}') && (top == '{')) || ((ch == ')') &&(top = '(')))
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (stk.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s1 = "({[()]})";
    string s2 = "({[()])";
    cout << isvalid(s1) << endl;
    cout << isvalid(s2) << endl;
    return 0;
}