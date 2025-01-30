#include <iostream>
using namespace std;
void evengreater(int a[],int n)
{
    int temp[n],j=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2!=0)
        {
            temp[j]=a[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<" ";
    }
    
    
}
int main()
{
    int a[] = { 1, 3, 2, 2, 5 };
    int n = sizeof(a) / sizeof(a[0]);
    evengreater(a,n);
    return 0;
}