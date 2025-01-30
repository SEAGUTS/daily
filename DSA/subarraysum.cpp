#include <iostream>
using namespace std;
void subarray(int a[],int n,int sum)
{
    for (int i = 0; i < n; i++)
    {
        int currentsum=a[i];
        if (currentsum==sum)
        {
            cout<<"sum found at indexs: "<<i<<endl;
        }
        else
        {
            for (int j= i+1; j < n; j++)
            {
                currentsum+=a[j];
                if (currentsum==sum)
                {
                    cout<<"sum found between indexes "<<i<<" and "<<j<<endl;
                    return;
                }
                
            }
            
        }
        
    }
    cout<<"no sub array found!";
    return;
    
}
int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 28;
    subarray(arr,n,sum);
    return 0;
}