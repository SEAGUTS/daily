#include <iostream>
using namespace std;
class student
{
    public:
    int id;
    string name;
    void insert(int i,string s)
    {
        id = i;
        name = s;
    }
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
    void show();
};
void student::show()
{
    cout<<"working"<<endl;
}
int main()
{
    student s1;
    int id;
    string name;
    cin>>id>>name;
    s1.insert(id,name);
    s1.display();
    s1.show();
    return 0;
}