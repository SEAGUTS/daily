#include <iostream>
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
using namespace std;
int main()
{
    hero *b = new hero;
    (*b).insert(1,'c');
    (*b).show();
    return 0;
}