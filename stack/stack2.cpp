#include <iostream>
using namespace std;
class twostack
{
public:
    int *a;
    int top1, top2;
    int size;
    twostack(int size)
    {
        this->size = size;
        top1 = -1;
        top2 = size;
        a = new int[size];
    }
    void push1(int data)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            a[top1] = data;
        }
        else
        {
            cout << "Stack Overflow!" << endl;
        }
    }
    void push2(int data)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            a[top2] = data;
        }
        else
        {
            cout << "Stack Overflow!" << endl;
        }
    }
    void pop1()
    {
        if (top1 >= 0)
        {
            top1--;
        }
        else
        {
            cout << "Stack Underflow!" << endl;
        }
    }
    void pop2()
    {
        if (top2 <= size)
        {

            top2--;
        }
        else
        {
            cout << "Stack Underflow!" << endl;
        }
    }
};
int main()
{
    twostack st = twostack(5);
    st.push1(5);
    st.push1(7);
    st.push1(9);
    st.push2(10);
    st.push2(20);
    st.push2(30);
    st.push2(40);

    for (int i = 0; i < 5; i++)
    {
        cout<<st.a[i]<<endl;
    }
    
    return 0;
}