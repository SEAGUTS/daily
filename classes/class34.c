#include <stdio.h>
struct student
{
    int roll_no;
    char name[30];
    float marks;
    struct more
    {
        int age;
        char sex[1];
    }dob;  
}s1;
void main()
{
    printf("Enter roll no:");
    scanf("%d",&s1.roll_no);
    printf("Enter name:");
    scanf("%s",&s1.name);
    printf("Enter marks:");
    scanf("%f",&s1.marks);
    printf("Enter age:");
    scanf("%d",&s1.dob.age);
    printf("Enter sex:");
    scanf("%s",&s1.dob.sex);
    printf("ROLL NO: %d\n",s1.roll_no);
    printf("NAME: %s\n",s1.name);
    printf("MARKS: %f\n",s1.marks);
    printf("AGE: %d\n",s1.dob.age);
    printf("SEX: %s\n",s1.dob.sex);
}