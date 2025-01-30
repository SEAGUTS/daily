#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "number of elements: ";
    cin >> n;
    int a[n];
    cout << "enter elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int start = 0;
    int end = n;
    int key;
    cout << "Enter the Key: ";
    cin >> key;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
        {
            cout << "postion:" << mid;
            break;
        }
        if (key > a[mid])
        {
            start = mid + 1;
        }
        if (key < a[mid])
        {
            end = mid - 1;
        }
    }

    return 0;
}