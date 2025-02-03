#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s = "Shreyansh";
    stack <char> ch;
    char c;
    for (int i = 0; i < s.length(); i++)
    {
        c = s[i];
        ch.push(c);
    }
    string r = "";
    while (!ch.empty())
    {
        c = ch.top();
        r.push_back(c);
        ch.pop();
    }
    cout<< "Answer is: "<<r<<endl;
    return 0;
}