#include <iostream>
using namespace std;
bool valid(char ch)
{
    if ((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z') || (ch>='0'&&ch<='9'))
    {
        return ch;
    }
    else
    {
        return 0;
    }
    
}
char islower(char ch)
{
    if ((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }   
}
void palindrome(string temp)
{
    int flag = 0,i,j;
    for ( i = 0,j = temp.length()-1; i < temp.length()/2 , j >= temp.length()/2; i++,j--)
    {
        if (temp[i]!=temp[j])
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 1)
    {
        cout<<"not at all"<<endl;
    }
    if (flag == 0)
    {
        cout<<"palindrome"<<endl;
    }
}
int main()
{
    string s = "ShRe$!@121ErHs";
    //faltu character hatane ke liye
    string temp="";
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    //lower case mei karne ke liye
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = islower(temp[i]);
    }
    cout<<temp<<endl;
    //palindrome check
    palindrome(temp);
    return 0;
}