#include <iostream>
using namespace std;
class hero
{
    public:
    int level;
    char a;
    void insert(int i,char b)
    {
        level=i;
        a = b;
    }
    private:
    void display()
    {
        cout<<level<<" "<<a<<endl;
    }
    public:
    void show()
    {
        display();
    }
};