//reverse
#include <stdio.h>
#include <string.h>
void main()
{
    char a[10] = "shreyansh";
    int n = strlen(a);
    for (int i = 0; i < n/2; i++)
    {
        char temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    printf("%s",a);
}