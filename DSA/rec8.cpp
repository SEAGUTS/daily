#include <iostream>
using namespace std;
void printarray(int *a, int n)
{
    cout << "size of array " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
bool linear(int *a, int n, int s)
{
    // printarray(a, n);
    if (n == 0)
    {
        return false;
    }
    if (a[0] == s)
    {
        return true;
    }
    else
    {
        bool rem = linear(a + 1, n - 1, s);
        return rem;
    }
}
int main()
{
    int a[] = {4, 7, 9, 11, 56, 2, 7, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int search = 19;
    bool ans = linear(a, n, search);
    if (ans == true)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "not present" << endl;
    }

    return 0;
}