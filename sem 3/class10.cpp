#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display function in Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override { // Overriding the virtual function
        cout << "Display function in Derived class" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived d;
    basePtr = &d;

    // Calls the derived class version of display
    basePtr->display();

    return 0;
}
