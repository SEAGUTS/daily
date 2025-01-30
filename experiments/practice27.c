#include <stdio.h>
struct student
{
    char name[30];
    int roll;
    float marks[5];
};
void main()
{
    struct student stu[1];
    for (int i = 0; i < 1; i++)
    {
        int j = 0;
        printf("Enter name:");
        scanf("%s",&stu[i].name);
        printf("enter roll no:");
        scanf("%d",&stu[i].roll);
        printf("Marks of pps:");
        scanf("%f",&stu[i].marks[j]);
        printf("Marks of english:");
        scanf("%f",&stu[i].marks[j+1]);
        printf("Marks of bcem:");
        scanf("%f",&stu[i].marks[j+2]);
        printf("Marks of chemistry:");
        scanf("%f",&stu[i].marks[j+3]);
        printf("Marks of maths:");
        scanf("%f",&stu[i].marks[j+4]);
    }
    for (int i = 0; i < 1; i++)
    {
        printf("Name: %s\n",stu[i].name);
        printf("Roll: %d\n",stu[i].roll);
        printf("Marks: %f\n",stu[i].marks[i+2]);
    }
    
}