#include <iostream>
using namespace std;
void insertionsort(int ar[],int n)
{
    int i,j,key;
    for ( i = 1; i < n; i++)
    {
        key=ar[i];
        j=i-1;
        while (j>=0 && ar[j]>key)
        {
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=key;
    }
    
}
void printarray(int ar[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int ar[]={12,11,14,13,5,6,9};
    int n=sizeof(ar)/sizeof(ar[0]);
    insertionsort(ar,n);
    printarray(ar,n);
    return 0;
}