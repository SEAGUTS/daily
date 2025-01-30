#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks:";
    cin>>marks;
    if (marks>=90)
    {
        cout<<"your grade is A!";
    }
    else if (marks>=80)
    {
        cout<<"your grade is B!";
    }
    else if (marks>=70)
    {
        cout<<"your grade is C!";
    }
    else if (marks>=60)
    {
        cout<<"your grade is D!";
    }
    else if (marks>=0)
    {
        cout<<"your grade is E!";
    }
    return 0;
}