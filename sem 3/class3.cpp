#include <iostream>
using namespace std;
class a
{
    public:
    class b
    {
        public:
        class c
        {
            public:
            void display();
        };
    };
    // public:
    // b c;
    // void show();
};
void a::b::c::display()
{
    cout<<"susscess";
}
// void a::show()
// {
//     c.display();
// }
int main()
{
    a::b::c d;
    d.display();
    return 0;
}