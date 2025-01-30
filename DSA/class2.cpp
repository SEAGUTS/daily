#include <iostream>
using namespace std;
class A
{
    public:
    class B
    {
        public:
        void display();
    };
};
void A::B::display()

    {
            cout<<"nested loop"<<endl;
    }

int main()
{
    A::B a;
    a.display();
    return 0;
    //int a void float double
}