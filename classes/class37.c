//pointers
#include <stdio.h>
void main()
{
    int x = 5;
    int *p1 = &x;
    printf("%p\n",&x);
    printf("%d\n",*p1 + 10);
    printf("%d",x);
    printf("%d\n",x);
    printf("%d\n",*p1);
    printf("%p\n",&x);
    printf("%p\n",p1);
    x++;
    printf("%d\n",x);
    printf("%d\n",*p1);
    *p1=*p1 + 1;
    printf("%d\n",x);
    printf("%p\n",&x);
    char ch = 'a';
    char *p2 = &ch;
    printf("%p\n",p2);
    printf("%p\n",p2+1);
    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(p2));
    printf("%d\n",sizeof(*p2));
    

}