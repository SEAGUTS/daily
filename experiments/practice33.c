#include <stdio.h>
void main()
{
    int n1 = 5 , n2 = 7, n3 = 9,largest;
    largest = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
    printf("%d",largest);
}