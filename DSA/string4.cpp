#include <iostream>
using namespace std;
int main()
{
    string str1 = "shreyansh";
    int n = str1.length();
    cout<<n<<endl;
    // for (int i = 0; i < n/2; i++)
    // {
    //     int temp = str1[i];
    //     str1[i] = str1[n-i-1];
    //     str1[n-i-1] = temp;
    // }
    string game;
    for (int i = 0; i < n; i++)
    {
        game.push_back(str1[n-i-1]);
    }
    cout<<game;
    return 0;
}