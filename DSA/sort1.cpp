//bubble sorting
#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubble(int a[],int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
            
        }
        
    }
    
}
void print(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    bubble(a,n);
    print(a,n);
    return 0;
}