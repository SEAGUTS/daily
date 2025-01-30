#include <iostream>
using namespace std;
int main()
{
    char a[10]="shreyansh";
    char *pt1=&a[0];
    cout<<*pt1<<endl;
    // pt1=pt1+1;
    // cout<<pt1<<endl;
    cout<<*(pt1+1)<<endl;
    char temp='z';
    char *pt2=&temp;
    cout<<pt2<<endl;
    return 0;
}