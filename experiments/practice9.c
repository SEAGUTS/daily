#include <stdio.h>
#include <string.h>
void main()
{
    int v = 0;
    int c = 0;
    char str1[10]="shreyansh";
    char ch;
    for (int i = 0; i < strlen(str1); i++)
    {
        ch = str1[i];
        if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
        {
            v++;
        }
        else if(ch == ' ')
        {
            continue;
        }
        else
        {
            c++;
        }
        
    }
    printf("%d\n",v);
    printf("%d\n",c);
      
}