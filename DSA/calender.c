#include <stdio.h>
#include <time.h>
int main() 
{
    int year, month, daysinmonth,firstday;
    time_t t;
    time(&t);
    printf("Enter Year: ");
    scanf("%d", &year);
    printf("Enter Month (1-12): ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Invalid month entered.\n");
        return 1;
    }
    if (month == 2) 
    {
        if ((year % 4 == 0 && year % 100 != 0)  (year % 400 == 0)) {
            daysinmonth = 29;
        } else {
            daysinmonth = 28;
        }
    } 
    else if (month == 4  month == 6  month == 9 || month == 11) 
    {
        daysinmonth = 30;
    } 
    else 
    {
        daysinmonth = 31;
    }
    int a = (14 - month) / 12;
    int y = year - a;
    int m = month + 12 * a - 2;
    firstday = (1 + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
    printf("\nTodays's Date & Time - %s",ctime(&t));
    printf("\nCalender for the requested Month :- ");
    printf("\n-----------------------------\n");
    printf("    %d/%d\n", month, year);
    printf("-----------------------------\n");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
    for (int i = 0; i < firstday; i++)
    {
        printf("    ");
    }
    for (int day = 1; day <= daysinmonth; day++)
    {
        printf("%4d", day);
        firstday++;
        if (firstday > 6)
        {
            firstday = 0;
            printf("\n");
        }
    }
    printf("\n-----------------------------\n");
    return 0;
}