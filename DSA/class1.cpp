#include <iostream>
using namespace std;
class A
{
    private:
    class B
    {
        public:
        void display()
        {
            cout<<"nested loop"<<endl;
        }
    };
    B a;
    public:
    void show()
    {
        a.display();
    }
};
int main()
{
    A b;
    b.show();
    return 0;
    //int a void float double
}