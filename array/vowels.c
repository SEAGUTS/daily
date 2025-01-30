#include <stdio.h>
void main()
{
    int vowel=0,cons=0;
    char ch[20];
    scanf("%s",&ch);
    for (int i = 0; ch[i]!='\0'; i++)
    {
        if(ch[i]=='A'||ch[i]=='a'||ch[i]=='E'||ch[i]=='e'||ch[i]=='I'||ch[i]=='i'||ch[i]=='O'||ch[i]=='o'||ch[i]=='U'||ch[i]=='u')
        {
            vowel++;
        }
        else if (ch[i]==' ')
        {
            continue;
        }
        else
        {
            cons++;
        }  
    }
    printf("vovels: %d\n",vowel);
    printf("consonant: %d",cons);
}