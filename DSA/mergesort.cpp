#include <iostream>
using namespace std;
merge(int a[], int low, int mid, int high)
{
    int i, j, k, b[high + 1];
    i = low;
    j = mid + 1;
    k = high;
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
        if (i < mid)
        {
            while (j <= high)
            {
                b[k] = a[j];
                j++;
                k++;
            }
        }
        else
        {
            while (i <= mid)
            {
                b[k] = a[i];
                i++;
                k++;
            }
        }
    }
    
}

mergesort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid;
        mid = (low + high) / 2;
        mergesort(a, low, mid,n);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main()
{
    int a[] = {43, 12, 7, 90, 55, 18};
    int n = sizeof(a) / sizeof(a[0]);
    int low = 0;
    int high = n - 1;
    mergesort(a, low, high,n);
    return 0;
}