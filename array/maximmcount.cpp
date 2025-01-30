#include <iostream>
using namespace std;
void maxi(int a[], int n)
{
    int count = 0;
    int maxcount = 0;
    int index;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count > maxcount)
        {
            maxcount = count;
            index = i;
        }
    }
    if (maxcount > n / 2)
    {
        cout << a[index];
    }
}
int main()
{
    int n = 10;
    int a[n] = {3, 4, 3, 4, 5, 5, 4, 4, 3, 4};
    maxi(a, n);
    return 0;
}