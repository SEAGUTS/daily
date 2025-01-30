#include <stdio.h>
struct student
{
    int roll;
    char name[30];
    float marks;
};
void main()
{
    struct student record[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter entries of %d student\n",i+1);
        printf("enter roll no:");
        scanf("%d",&record[i].roll);
        printf("enter name:");
        scanf("%s",&record[i].name);
        printf("enter marks:");
        scanf("%f",&record[i].marks);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("ROLLNO: %d\n",record[i].roll);
        printf("NAME: %s\n",record[i].name);
        printf("MARKS: %f\n",record[i].marks);
    }
    
}
