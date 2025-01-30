#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
void main()
{
    struct student s1;
    printf("Enter roll number:");
    scanf("%d",&s1.rollno);
    printf("\nEnter name:");
    scanf("%s",&s1.name);
    printf("\nEnter marks:");
    scanf("%f",&s1.marks);

    printf("\nroll number: %d",s1.rollno);
    printf("\nEnter name: %s",s1.name);
    printf("\nmarks: %f",s1.marks);
    

}
