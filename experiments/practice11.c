#include <stdio.h>
struct student
{
    int rollno;
    char name[50];
    float marks;
};
void main()
{
    struct student s1[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter roll number:");
        scanf("%d",&s1[i].rollno);
        printf("Enter name:");
        scanf("%s",&s1[i].name);
        printf("Enter marks:");
        scanf("%f",&s1[i].marks);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nroll number: %d",s1[i].rollno);
        printf("\nEnter name: %s",s1[i].name);
        printf("\nmarks: %f",s1[i].marks);
    
    }
    

    

}
