#include <iostream>   
using namespace std;
class f
{
    int a;
    int b;
    public:
    f (int c,int d)
    {
        a=c;
        b=d;
    }
    ~f()
    {
        cout<<"destroyed";
    }
    // f(f &g)
    // {
    //     a=g.a;
    //     b=g.b;
    // }
    void display()
    {
        cout<<a<<endl<<b<<endl;
    }
};
int main ()   
{
    f z(5,6);
    z.display();
    cout<<sizeof(z)<<endl;
    return 0;   
}