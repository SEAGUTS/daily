#include <iostream>
using namespace std;
void dist(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if(a[i]==a[j])
            {
                break;
            }
        }
        if (i==j)
        {
            cout<<a[i]<<" ";
        }
        
        
    }
    
}
int main()
{
    int a[]={4,7,3,5,9,7,2,3,4,6,6,6,2,7};
    int n=sizeof(a)/sizeof(a[0]);
    dist(a,n);
    return 0;
}