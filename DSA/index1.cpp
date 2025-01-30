#include <iostream>
using namespace std;
void index(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            } 
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=i)
        {
            a[i]=-1;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
      
}
int main()
{
    int a[] = { -2, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
    int n = sizeof(a) / sizeof(a[0]);
    index(a,n);
    return 0;
}