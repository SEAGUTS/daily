#include <stdio.h>
void main()
{
    float x,y;
    int choice3;
    printf("\n1. inch to cm\n2. cm to inch\n 3. foot to meter\n4. meter to foot\n");
    printf("5. mile to km\n 6. km to mile\n 7. acre to square meter\n 8. square meter to acre\n");
    printf("9. km/h to m/s\n10. m/s to km/h\n11. lb to kg\n12. kg to lb\n");
    printf("13. atm to pa\n14. pa to atm\n15. f^ to c^\n16. c^ to f^\n17. joule to cal\n18. cal to joule\n");
    printf("ENTER CHOICE:");
    scanf("%d",&choice3);
    switch (choice3)
    {
    case 1:
    printf("Enter the value in inch:");
    scanf("%f",&x);
    y= x * 2.54;
    printf("in cm: %d",y);
    break;
    case 2:
    printf("Enter the value in cm:");
    scanf("%f",&x);
    y=x/2.54;
    printf("in inch: %d",y);
    break;
    case 3:
    printf("Enter the value in foot:");
    scanf("%f",&x);
    y=x*0.3048;
    printf("in meter: %d",y);
    break;
    case 4:
    printf("Enter the value in meter:");
    scanf("%f",&x);
    y=x/0.3048;
    printf("in foot: %f",y);
    break;
    case 5:
    printf("Enter the value in mile:");
    scanf("%f",&x);
    y=x*1.609;
    printf("in km: %f",y);
    break;
    case 6:
    printf("Enter the value in km:");
    scanf("%f",&x);
    y=x/1.609;
    printf("in mile: %f",y);
    break;
    case 7:
    printf("Enter the value in acre:");
    scanf("%f",&x);
    y=x*4046.86;
    printf("in square meter: %f",y);
    break;
    case 8:
    printf("Enter the value in square meter:");
    scanf("%f",&x);
    y=x/4046.86;
    printf("in acre: %f",y);
    break;
    case 9:
    printf("Enter the value in km/h:");
    scanf("%f",&x);
    y=x/3.6;
    printf("in m/s: %f",y);
    break;
    case 10:
    printf("Enter the value in m/s:");
    scanf("%f",&x);
    y=x*3.6;
    printf("in km/h: %f",y);
    break;
    case 11:
    printf("Enter the value in lb:");
    scanf("%f",&x);
    y=x*0.4535;
    printf("in kg: %f",y);
    break;
    case 12:
    printf("Enter the value in kg:");
    scanf("%f",&x);
    y=x/0.4535;
    printf("in lb: %f",y);
    break;
    case 13:
    printf("Enter the value in atm:");
    scanf("%f",&x);
    y=x*101325;
    printf("in pa: %f",y);
    break;
    case 14:
    printf("Enter the value in pa:");
    scanf("%f",&x);
    y=x/101325;
    printf("in atm: %f",y);
    break;
    case 15:
    printf("Enter the value in fahrenheit:");
    scanf("%f",&x);
    y=((x-32)*5)/9;
    printf("in celsius: %f",y);
    break;
    case 16:
    printf("Enter the value in celsius:");
    scanf("%f",&x);
    y=(x * 9)/5 + 32;
    printf("in fahrenheit: %f",y);
    break;
    case 17:
    printf("Enter the value in joule:");
    scanf("%f",&x);
    y=x*0.23900;
    printf("in cal: %f",y);
    break;
    case 18:
    printf("Enter the value in cal:");
    scanf("%f",&x);
    y=x/0.23900;
    printf("in joule: %f",y);
    break;
    default:
    printf("Invalid Choice!");
    break;
    }
}
