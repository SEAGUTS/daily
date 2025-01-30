#include <iostream>
using namespace std;
void indexarray(int a[],int in[],int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[in[i]]=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i]=temp[i];
    }
    
}
int main()
{
    int arr[] = { 50, 40, 70, 60, 90 };
    int index[] = { 3, 0, 4, 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    indexarray(arr,index,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}