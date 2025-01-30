#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

int main() {
    Shape* shape;

    Circle c;
    Square s;

    shape = &c;
    shape->draw(); // Calls Circle's draw method

    shape = &s;
    shape->draw(); // Calls Square's draw method

    return 0;
}
