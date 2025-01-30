#include <stdio.h>
void main()
{
    char ch;
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z'))
    {
        printf("lower case");
    }
    else if ((ch>='A' && ch<='Z'))
    {
        printf("Upper case");
    }
    else if ((ch>='0'&&ch<='9'))
    {
        printf("Digit");
    }
    else if (ch==' ')
    {
        printf("Space");
    }
    else
    {
        printf("Special character");
    }
}