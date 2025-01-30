//palinrome character
#include <stdio.h>
#include <string.h>
void main()
{
    char str[20]=" ";
    printf("Enter the string:");
    scanf("%s",&str);
    int n = strlen(str);
    int flag = 0;
    for (int i = 0; i < n/2; i++)
    {
        if (str[i]!=str[n-i-1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("\nNot at all");
    }
    if (flag == 0)
    {
        printf("\nPalindrome");
    }
    
}