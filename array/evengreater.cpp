#include <iostream>
using namespace std;
void evengreater(int a[],int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0)
        {
            if (a[i]<a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            
              
        }
    }

    cout<<"sorted array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}
int main()
{
    int a[]={5,4,8,1,6,2,9};
    int n=sizeof(a)/sizeof(a[0]);
    evengreater(a,n);  
    return 0;
}