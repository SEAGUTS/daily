#include <iostream>
using namespace std;
class a
{
    int real;
    int imag;
    public:
    a(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    a operator+(a &obj)
    {
        a temp;
        temp.real=real + obj.real;
        temp.imag=imag + obj.imag;
        return temp;
    }
    void print()
    {
        cout<<real<<" +i"<<imag<<endl;
    }
};
int main()
{
    a c1(2,3);
    a c2(4,5);
    a c3;
    c3 = c1 + c2;
    c3.print();
    return 0;
}