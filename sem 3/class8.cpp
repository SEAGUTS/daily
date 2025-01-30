#include <iostream>
using namespace std;
class a
{
    friend class b;
    private:
    int meters;
    public:
    a()
    {
        meters=0;
    }
    friend void addvalue(a &x);
};
void addvalue(a&x)
{
    x.meters = x.meters + 10;
}
class b
{
    public:
    void show(a obj)
    {
        cout<<obj.meters;
    }
};
int main()
{
    a c;
    addvalue(c);
    b d;
    d.show(c);
    return 0;
}