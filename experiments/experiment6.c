#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter Three Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The Gretest/Maximum Number is:%d",d);
    return 0;
}