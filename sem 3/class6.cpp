#include <iostream>
using namespace std;
class complex
{
    int real,imag;
    public:
    void notreal(int r,int i)
    {
        real=r;
        imag=i;
    }
    complex operator+(complex &a)
    {
        complex simon;
        simon.real=real+a.real;
        simon.imag=imag+a.imag;
    }
    void display()
    {
        cout<<real<<" + i"<<imag;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.notreal(2,3);
    c2.notreal(4,5);
    c3=c1+c2;
    c3.display();
    return 0;
}