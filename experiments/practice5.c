#include <stdio.h>
#include <string.h>
void main()
{
    char name1[20]="shreyansh";
    // // printf("%d ",sizeof(name1));
    // // char name2[]="tanmay";
    // // printf("%s",strcat(name2,name1));
    // // printf("%\n");
    char name3[21]="shreyanshshre";
    // // printf("%s\n",name3);
    // strcpy(name3,name1);
    // printf("%s\n",name3);
    // char name4[4]="shri";
    // printf("%d\n",strcmp(name1,name3));
    // printf("%d\n",strncmp(name1,name4,4));
    printf("%d\n",strcmp(name3,name1));
    printf("%s\n",name3);
    printf("%s\n",name1);
    strrev(name1);
    printf("%s",name1);
    
}