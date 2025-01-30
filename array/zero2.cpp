#include <iostream>
using namespace std;
void pushtozero(int ar[],int n)
{
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
        if(ar[i]!=0)
        {
            ar[count++]=ar[i];
        }
    }
    while (count<n)
    {
        ar[count++]=0;
    }
    cout<<"After pussing zero to last:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    
}
int main()
{
    int ar[]={4,6,0,1,0,3,0,8,1,0};
    int n=sizeof(ar)/sizeof(ar[0]);
    pushtozero(ar,n);
    return 0;
}