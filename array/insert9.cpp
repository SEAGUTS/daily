#include <iostream>
using namespace std;
int insertsorted(int ar[], int n, int key, int capacity)
{
    if (n >= capacity)
    {
        return n;
    }
    int i;
    for (i = n - 1; (i >= 0 && ar[i] > key); i--)
    {
        ar[i + 1] = ar[i];
    }
    ar[i + 1] = key;
    return n + 1;
}
int main()
{
    int ar[20] = {10, 20, 30, 40, 50, 60, 70};
    int capacity = sizeof(ar) / sizeof(ar[0]);
    int n = 7;
    int key = 46;
    cout << "before insertion:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    n = insertsorted(ar, n, key, capacity);
    cout << endl
         << "after insertion:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}