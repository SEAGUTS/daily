#include <stdio.h>
#include <string.h>
void main()
{
    char a[]="shreyansh";
    char b[]="golchha";
    char c[]=" ";
    char d[]=" ";
    int n=strlen(a);
    printf("total number of characters in string a: %d",n);
    strcpy(c,a);
    printf("\nCopied string: %s",c);
    strncpy(d,b,5);
    printf("\nCopied string: %s",d);



}