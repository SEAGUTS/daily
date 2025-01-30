#include <iostream>
using namespace std;
class student
{
public:
    int roll_no;
    string name;
    void input()
    {
        cout << "enter Roll number:";
        cin >> roll_no;
        cout << "Enter name:";
        cin >> name;
    }
    void show()
    {
        cout << "Student roll_no:" << roll_no << " " << "student name:" << name << endl;
    }
};
int main()
{
    int n;
    cout << "enter number of data to enter:";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        s[i].show();
    }
    return 0;
}