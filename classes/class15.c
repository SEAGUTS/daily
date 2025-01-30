#include <stdio.h>
#include <string.h>
void main()
{
    char str1[20] = "over";
    char str2[20] = "game";
    char str3[10] = " ";
    // printf("%s\n",str3);
    // strncpy(str3,str1,7);
    // printf("%s",str3);
    // printf("%s",str3);
    // printf("%s %s\n",str1,str2);
    // printf("%d %d\n",strlen(str1),strlen(str2));
    // printf("%d %d\n",sizeof(str1),sizeof(str2));
    // printf("%c %c\n",str1[5],str2[1]);
    strcat(str1,str2);
    // puts(str1);
    printf("%s\n",str1);
    printf("%s\n",str2);
    // printf("%s\n",strcat(str2,str1));
    // printf("%s\n",str2);
    // printf("%d",sizeof(str2));
    // printf("%d",sizeof(str1));
}
// reverse , palindrome