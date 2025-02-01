#include <iostream>
#include <stack>
using namespace std;
class mystack
{
    public:
    int *a;
    int top;
    int size;
    mystack(int size)
    {
        this-> size = size;
        a = new int[size];
        top = -1;
    }
    void push(int d)
    {
        if (top == size-1)
        {
            cout<<"Stack Overflow!"<<endl;
        }
        else
        {
            top++;
            a[top] = d;
        }
    }
    void pop()
    {
        if (top==-1)
        {
            cout<<"Stack Underflow!"<<endl;
        }
        else
        {
            top--;
        }  
    }
    int peek()
    {
        if (top >=0 && top<size)
        {
            return a[top];
        }
        else
        {
            cout<<"Stack is Empty!"<<endl;
        }  
    }
    bool isempty()
    {
        if (top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
int main()
{
    mystack st(5);
    st.push(10);
    st.push(9);
    st.push(8);
    st.push(7);
    st.push(6);
    st.push(5);
    for (int i = 0; i < 5; i++)
    {
        cout<<st.peek()<<endl;
        st.pop();
    }
    cout<<st.isempty();
    return 0;
}