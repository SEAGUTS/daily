#include <iostream>
using namespace std;
int findnumber(int ar[],int n,int key);
int deletenumber(int ar[],int n,int key)
{
    int pos=findnumber(ar,n,key);
    if (pos==-1)
    {
        cout<<"element not found!";
        return n;
    }
    int i;
    for (i = pos; i < n-1; i++)
    {
        ar[i]=ar[i+1];
    }
    return n-1;
}
int findnumber(int ar[],int n,int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if(ar[i]==key)
        {
            return i;
        }
    }
    return -1;

    
}
int main()
{
    int ar[]={1,2,3,4,5};
    int n=sizeof(ar)/sizeof(ar[0]);
    int key=3;
    cout<<"before deletion:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    n=deletenumber(ar,n,key);
    cout<<"\nAfter deletion:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    
    
    return 0;
}