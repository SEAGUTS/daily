#include <iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *pt = a;
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<"\t"<<(a+i)<<endl;
    }
    cout<<endl<<&a<<endl<<*(a+1)<<endl<<*&a[4]<<endl;
    cout<<sizeof(a)<<endl<<sizeof(pt)<<endl;
    return 0;
}