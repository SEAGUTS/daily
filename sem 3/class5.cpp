#include <iostream>
using namespace std;
class vehicle
{
    public:
    vehicle()
    {
        cout<<"system";
    }
};
class car
{
    public:
    car()
    {
        cout<<"first";
    }
};
class wheel:public vehicle,public car{
    public:
    wheel()
    {
        cout<<"kyun kar raha";
    }
};
int main()
{
    wheel c1;
    return 0;
}