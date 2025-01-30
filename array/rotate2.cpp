#include <iostream>
using namespace std;
void rotate(int arr[], int d, int n)
{
    // Storing rotated version of array
    int temp[n];
 
    // Keeping track of the current index
    // of temp[]
    int j = 0;
 
    // Storing the n - d elements of
    // array arr[] to the front of temp[]
    for (int i = d; i < n; i++) {
        temp[j] = arr[i];
        j++;
    }
 
    // Storing the first d elements of array arr[]
    //  into temp
    for (int i = 0; i < d; i++) {
        temp[j] = arr[i];
        j++;
    }
 
    // Copying the elements of temp[] in arr[]
    // to get the final rotated array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
 
// Function to print elements of array
void printTheArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
 
// Driver's code
int main()
{
    int N;
    cin>>N;
    int arr[N];
    int d;
    cin>>d;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    
    // Function calling
    rotate(arr, d, N);
    printTheArray(arr, N);
 
    return 0;
}
