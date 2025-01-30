#include <iostream>
using namespace std;
int binarySearch(int ar[],int low,int high,int key);
int deleteElement(int ar[],int n,int key)
{
    int pos=binarySearch(ar,0,n-1,key);
    if (pos==-1)
    {
        cout<<"element not found!";
        return n;
    }
    for (int i = pos; i < n-1; i++)
    {
        ar[i]=ar[i+1];
    }
    return n-1;
}
int binarySearch(int ar[],int low,int high,int key)
{
    if(high<low)
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(ar[mid]==key)
    {
        return mid;
    }
    if(key>ar[mid])
    {
        return binarySearch(ar,mid+1,high,key);
    }
    return binarySearch(ar,low,mid-1,key);
}
int main()
{
    int ar[]={10,20,30,40,50,60,70};
    int n=sizeof(ar)/sizeof(ar[0]);
    int key=50;
    cout<<"before deletion:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    n=deleteElement(ar,n,key);
    cout<<endl<<"after deletion:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    
    return 0;
}