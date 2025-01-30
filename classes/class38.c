#include <stdio.h>
void main()
{
    int a[5]={5,7,2,1,5};
    int *p1; 
    p1 = &a[0];
    printf("%p\n",p1);
    printf("%p\n",a);
    printf("%p\n",&a[0]);
    printf("%p\n",p1+1);
    printf("%p\n",&a[1]);
    printf("value  address  value by p\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d      %p       %d\n",a[i],p1+i,*(p1+i));
    }
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(p1));
    printf("%d\n",sizeof(*p1));
    // int n = sizeof(a)/sizeof(a[0]);
}