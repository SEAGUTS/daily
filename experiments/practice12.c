#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
    struct dob
    {
        int date;
        char month[20];
        int year;
    }dob;
    
}s1;
void main()
{
    printf("Enter roll number:");
    scanf("%d",&s1.rollno);
    printf("Enter name:");
    scanf("%s",&s1.name);
    printf("Enter marks:");
    scanf("%f",&s1.marks);
    printf("enter date of birth:");
    scanf("%d",&s1.dob.date);
    printf("Enter month:");
    scanf("%s",&s1.dob.month);
    printf("enter year:");
    scanf("%d",s1.dob.year);
    printf("\n");

    printf("\nroll number: %d",s1.rollno);
    printf("\nEnter name: %s",s1.name);
    printf("\nmarks: %f",s1.marks);
    printf("\ndate of birth: %d",s1.dob.date);
    printf("\nEnter month: %s",s1.dob.month);
    printf("\nEnter year: %d",s1.dob.year);
    
    

}
