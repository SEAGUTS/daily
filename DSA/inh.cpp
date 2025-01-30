
#include <iostream>
using namespace std;

class base1{
protected:
    int base1int;

public:
    void base1int(int a)
    {
        base1int = a;
    };

    class base2{
    protected:
        int base2int;

    public:
        void base2int(int a)
        {
            base2int = a;
        };

class derived : public base1, public base2{
            cout << "the value of base1int is" << base1int << endl;
            cout << "the value of base2int is" << base2int << endl;
            cout << "the sum of two num is" << base1int+base2int << endl;
        };
};

    int main()
    {
        return 0;
    }

