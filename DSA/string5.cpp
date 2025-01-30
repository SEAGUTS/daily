#include <iostream>
using namespace std;
char maximum(string s)
{
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        a[number]++;
    }
    
    int maxi = -1 , ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi<a[i])
        {
            ans = i;
            maxi = a[i];
        }
        
    }
    return 'a' + ans;
}
int main()
{
    string s;
    cin >> s;
    cout<<maximum(s)<<endl;
}