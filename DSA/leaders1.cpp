#include <iostream>
using namespace std;
void leader(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i+1; j < n; j++)
        {
            if (a[i]<=a[j])
            {
                break;
            }
            
        }
        if (j==n)
        {
            cout<<a[i]<<" ";
        }
        
    }
    
}
int main()
{
    int a[] = {16, 17, 9, 3, 5, 2};
    int n = sizeof(a)/sizeof(a[0]);
    leader(a, n);
    return 0;
}