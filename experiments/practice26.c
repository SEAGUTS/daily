#include <stdio.h>
struct student
{
    char name[30];
    int roll;
    float marks;
}stu1;
void main()
{
    // struct student stu1 = {"shreyansh",1,95};
    // struct student stu2,stu3;
    // printf("Enter name:");
    // scanf("%s",&stu2.name);
    // printf("enter roll no:");
    // scanf("%d",&stu2.roll);
    // printf("marks:");
    // scanf("%f",&stu2.marks);
    // printf("Name: %s\n",stu1.name);
    // printf("Roll: %d\n",stu1.roll);
    // printf("Marks: %f\n",stu1.marks);
    // printf("Name: %s\n",stu2.name);
    // printf("Roll: %d\n",stu2.roll);
    // printf("Marks: %f\n",stu2.marks);
    // stu3=stu2;
    // printf("Name: %s\n",stu3.name);
    // printf("Roll: %d\n",stu3.roll);
    // printf("Marks: %f\n",stu3.marks);
    // printf("Name: %p\n",&stu1.name);
    // printf("Roll: %p\n",&stu1.roll);
    // printf("Marks: %p\n",&stu1.marks);
    // printf("Name: %p\n",&stu2.name);
    // printf("Roll: %p\n",&stu2.roll);
    // printf("Marks: %p\n",&stu2.marks);
    // printf("Name: %p\n",&stu3.name);
    // printf("Roll: %p\n",&stu3.roll);
    // printf("Marks: %p\n",&stu3.marks);
    printf("%d",sizeof(struct student));
}
