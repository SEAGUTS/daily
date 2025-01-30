#include <iostream>
using namespace std;
class a
{
    public:
    int len,bre;

    a()
    {
        cout<<"system";
    }
    // a(int l,int b)
    // {
    //     len = l;
    //     bre = b;
    // }
    // a(a &ob)
    // {
    //     len = ob.len;
    //     bre = ob.bre;
    // }
    ~a()
    {
        cout<<"bye bye";
    }
    void area()
    {
        cout<<"hello?";
    }
};
int main()
{
    a b;
    b.area();
    return 0;
}