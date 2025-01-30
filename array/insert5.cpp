#include <iostream>
using namespace std;
void insertpos(int ar[],int n,int x,int pos)
{
    for (int i = n-1; i >=pos; i--)
    {
        ar[i+1]=ar[i];
    }
    ar[pos]=x;
}
int main()
{
    int ar[]={1,2,3,4,5};
    int n=sizeof(ar)/sizeof(ar[0]);
    int pos=2;
    int x=10;
    cout<<"before insertion:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    
    insertpos(ar,n,x,pos);
    n++;
    cout<<"\nafter insertion:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    
    return 0;
}