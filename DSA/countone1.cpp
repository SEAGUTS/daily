#include <iostream>
using namespace std;
int countone(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count == 0)
        {
            return a[i];
        }
    }
}
int main()
{
    int a[] = {2, 3, 5, 4, 5, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);

    // Function call
    cout << "Element occurring once is "
         << countone(a, n);
    return 0;
}