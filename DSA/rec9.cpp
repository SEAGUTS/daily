#include <iostream>
using namespace std;
void printarray(int a[],int s,int e)
{
    for (int i = s; i < e; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
bool binary1(int a[],int n,int key,int s,int e)
{
    cout<<endl;
    printarray(a,s,e);
    if (s>e)
    {
        return false;
    }
    
    int mid = s + (e-s)/2;
    if (a[mid]==key)
    {
        return true;
    }
    if (a[mid]>key)
    {
        bool ans = binary1(a,n,key,s,mid-1);
        return ans;
    }
    else
    {
        bool ans = binary1(a,n,key,mid+1,e);
        return ans;
    }
    
}
int main()
{
    int a[]={2,4,6,8,10,12};
    int n = 6;
    int key = 12;
    int s = 0;
    int e = n;
    bool ans = binary1(a,n,key,s,e);
    if (ans==true)
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
    
    
    return 0;
}