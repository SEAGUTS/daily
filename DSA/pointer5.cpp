#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int *ptr = &i ;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // int **ptr1=&ptr;
    // cout<<ptr1<<endl;
    // cout<<*ptr1<<endl;
    int **ptr1 = &ptr;
    int ***ptr2 = &ptr1;
    cout<<ptr<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<**ptr1<<endl;
    return 0;
}