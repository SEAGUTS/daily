#include <stdio.h>
void main()
{
    FILE *fp;
    // char ch[15]="\nshreyansh g";
    fp = fopen("first.txt","a+");
    // fprintf(fp,"%s",ch);
    // char ch = fgetc(fp);
    // printf("%c\n",ch);
    char str[10];
    fgets(str,5,fp);
    printf("%s",str);
    fputs("shreyansh",fp);
    fclose(fp);
}