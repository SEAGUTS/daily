#include <iostream>
using namespace std;
int count(int a[],int n)
{
    int min=a[0],min_i=0;
    for (int i = 0; i < n; i++)
    {
        if (min>a[i])
        {
            min=a[i];
            min_i=i;
        }
    }
    return min_i;
}
int main()
{
    int arr[] = { 15, 18, 5, 3, 6, 2 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout <<  count(arr, n); 
    return 0;
}