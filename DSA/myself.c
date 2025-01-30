#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    c=a*b;
    printf("product of two number is:%d\n",c);
    printf("a-b=%d\n",a-b);
    printf("a/b=%d\n",a%b);
    printf("a+b=%d\n",a+b);
    printf("a\\b=%d\n",a++,b++);
    printf("final a:%d\n",a);
    printf("final b:%d\n",b);
    printf("%d==%d is:%d\n",a,b,a==b);
    printf("%d==%d is:%d\n",a,c,a==c);
    printf("%d>%d is:%d\n",a,b,a>b);
    printf("%d>%d is:%d\n",a,c,a>c);
    printf("%d>=%d is:%d\n",a,b,a>=b);
    printf("%d>=%d is:%d\n",a,c,a>=c);
    printf("%d<=%d is:%d\n",a,b,a<=b);
    printf("%d<=%d is:%d\n",a,c,a<=c);
    return 0;
}