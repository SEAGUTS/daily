#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout<<"value of num: "<<num<<endl<<"addres of num: "<<&num<<endl;
    int *ptr2=&num;
    int *ptr1 = &num;
    cout<<"address of num by ptr: "<<ptr1<<endl;
    cout<<"value of num by ptr: "<<*ptr1<<endl;
    ptr2=ptr2+1;
    cout<<ptr1<<endl<<*ptr1<<endl<<num<<endl<<ptr2<<endl<<*ptr2<<endl;
    cout<<"size of integer: "<<sizeof(num)<<endl;
    cout<<"size of pointer: "<<sizeof(ptr1)<<endl;
    cout<<"size of pointer: "<<sizeof(*ptr1)<<endl;
    int *ptr3=0;
    ptr3=ptr1;
    cout<<*ptr3<<endl;
    return 0;
}