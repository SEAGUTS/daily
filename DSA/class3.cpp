#include <iostream>
#include "hero.cpp"
using namespace std;
// class hero
// {
//     public:
//     int level;
//     char a;
//     void insert(int i,char b)
//     {
//         level=i;
//         a = b;
//     }
//     void display()
//     {
//         cout<<level<<" "<<a<<endl;
//     }
// };
int main()
{
    hero h1;
    cout<<"size:"<<sizeof(h1)<<endl;
    cout<<h1.level;
    h1.show();
    return 0;
}