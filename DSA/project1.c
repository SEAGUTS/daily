#include <stdio.h>
#include <math.h>

int main()
{
    int choice, a, b, choice1, choice2, choice3;
    float x, y, result;
    int n, m;
    printf("\nENTER THE OPERATION :\n");
    printf("1. ADDITION\n2. SUBTRATION\n3. MULTIPLICATION\n4. DIVISION\n");
    printf("5. SQUARE ROOT\n6. X ^ Y\n7. X ^ 2\n8. X ^ 3\n");
    printf("9. 1 / X\n");
    printf("10. X^ 10\n11. X!\n12. LOG10(x)\n13. MODULUS\n");
    printf("14. TRIGNOMETRY\n");
    printf("15. MATRIX\n");
    printf("16. UNIT CONVERSION\n");
    printf(" ENTER CHOICE: ");
    scanf("%d", &choice);
    if (choice == 14)

    {
        printf("1. SIN(X)\n2. COS(X)\n3. TAN(X)\n4. COSEC(X)\n");
        printf("5. COT(X)\n6. SEC(X)\n");
        printf("ENTER CHOICE\n:");
        scanf("%d", &choice1);
    }
    switch (choice)
    {
    case 1:
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = x + y;
        printf("\nResult: %f", result);
        break;
    case 2:
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = x - y;
        printf("\nResult: %f", result);
        break;
    case 3:
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = x * y;
        printf("\nResult: %f", result);
        break;
    case 4:
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = x / y;
        printf("\nResult: %f", result);
        break;
    case 5:
        printf("Enter X: ");
        scanf("%f", &x);
        result = sqrt(x);
        printf("\nResult: %f", result);
        break;
    case 6:
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = pow(x, y);
        printf("\nResult: %f", result);
        break;
    case 7:
        printf("Enter X: ");
        scanf("%f", &x);
        result = pow(x, 2);
        printf("\nResult: %f", result);
        break;
    case 8:
        printf("Enter X: ");
        scanf("f", &x);
        result = pow(x, 3);
        printf("\nResult: %f", result);
        break;
    case 9:
        printf("Enter X: ");
        scanf("%f", &x);
        result = pow(x, -1);
        printf("\nResult: %f", result);
        break;
    case 10:
        printf("Enter X: ");
        scanf("%f", &x);
        result = pow(x, 10);
        printf("\nResult: %f", result);
        break;
    case 11:
        printf("Enter X: ");
        scanf("%f", &x);
        result = 1;
        for (int i = 1; i <= x; i++)
        {
            result = result * i;
        }
        printf("\nResult: %f", result);
        break;
    case 12:
        printf("Enter X: ");
        scanf("%f", &x);
        result = log10(x);
        printf("\nResult: %f", result);
        break;
    case 13:
        printf("Enter X: ");
        scanf("%d", &a);
        printf("\nEnter Y: ");
        scanf("%d", &b);
        result = a % b;
        printf("\nResult: %d", result);
        break;
    case 14:
        switch (choice1)
        {
        case 1:
            printf("Enter X in radian: ");
            scanf("%f", &x);
            result = sin(x * 3.14159 / 180);
            printf("\nResult: %f", result);
            break;
        case 2:
            printf("Enter X in radian: ");
            scanf("%f", &x);
            result = cos(x * 3.14159 / 180);
            printf("\nResult: %f", result);
            break;
        case 3:
            printf("Enter X in radian: ");
            scanf("%f", &x);
            result = tan(x * 3.14159 / 180);
            printf("\nResult: %f", result);
            break;
        case 4:
            printf("Enter X in radian: ");
            scanf("%f", &x);
            result = 1 / (sin(x * 3.14159 / 180));
            printf("\nResult: %f", result);
            break;
        case 5:
            printf("Enter X in radian: ");
            scanf("%f", &x);
            result = 1 / tan(x * 3.14159 / 180);
            printf("\nResult: %f", result);
            break;
        case 6:
            printf("Enter X in radian: ");
            scanf("%f", &x);
            result = 1 / cos(x * 3.14159 / 180);
            printf("\nResult: %f", result);
            break;
        default:
            printf("\nInvalid Choice");
        }
    }
    if (choice == 15)
    {
        printf("Enter number of rows:");
        scanf("%d", &n);
        printf("\nEnter number of columns:");
        scanf("%d", &m);
        int arr1[n][m];
        int arr2[n][m];
        int result1[n][m];
        printf("\nEnter first matrix:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("\nEnter second matrix:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
        printf("\n1. matrix addition\n2.matrix subtraction\n3.matrix multiplication\n");
        printf("ENTER CHOICE:");
        scanf("%d", &choice2);
        switch (choice2)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    result1[i][j] = arr1[i][j] + arr2[i][j];
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    printf("%d ", result1[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    result1[i][j] = arr1[i][j] - arr2[i][j];
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    printf("%d ", result1[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    result1[i][j] = 0;
                    for (int k = 0; k < n; k++)
                    {
                        result1[i][j] += arr1[i][k] * arr2[k][j];
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    printf("%d ", result1[i][j]);
                }
                printf("\n");
            }
        default:
            break;
        }
    }
    if (choice == 16)
    {
        printf("\n1. inch to cm\n2. cm to inch\n3. foot to meter\n4. meter to foot\n");
        printf("5. mile to km\n6. km to mile\n7. acre to square meter\n8. square meter to acre\n");
        printf("9. km/h to m/s\n10. m/s to km/h\n11. lb to kg\n12. kg to lb\n");
        printf("13. atm to pa\n14. pa to atm\n15. f^ to c^\n16. c^ to f^\n17. joule to cal\n18. cal to joule\n");
        printf("ENTER CHOICE:");
        scanf("%d", &choice3);
        switch (choice3)
        {
        case 1:
            printf("Enter the value in inch:");
            scanf("%f", &x);
            y = x * 2.54;
            printf("in cm: %d", y);
            break;
        case 2:
            printf("Enter the value in cm:");
            scanf("%f", &x);
            y = x / 2.54;
            printf("in inch: %d", y);
            break;
        case 3:
            printf("Enter the value in foot:");
            scanf("%f", &x);
            y = x * 0.3048;
            printf("in meter: %d", y);
            break;
        case 4:
            printf("Enter the value in meter:");
            scanf("%f", &x);
            y = x / 0.3048;
            printf("in foot: %f", y);
            break;
        case 5:
            printf("Enter the value in mile:");
            scanf("%f", &x);
            y = x * 1.609;
            printf("in km: %f", y);
            break;
        case 6:
            printf("Enter the value in km:");
            scanf("%f", &x);
            y = x / 1.609;
            printf("in mile: %f", y);
            break;
        case 7:
            printf("Enter the value in acre:");
            scanf("%f", &x);
            y = x * 4046.86;
            printf("in square meter: %f", y);
            break;
        case 8:
            printf("Enter the value in square meter:");
            scanf("%f", &x);
            y = x / 4046.86;
            printf("in acre: %f", y);
            break;
        case 9:
            printf("Enter the value in km/h:");
            scanf("%f", &x);
            y = x / 3.6;
            printf("in m/s: %f", y);
            break;
        case 10:
            printf("Enter the value in m/s:");
            scanf("%f", &x);
            y = x * 3.6;
            printf("in km/h: %f", y);
            break;
        case 11:
            printf("Enter the value in lb:");
            scanf("%f", &x);
            y = x * 0.4535;
            printf("in kg: %f", y);
            break;
        case 12:
            printf("Enter the value in kg:");
            scanf("%f", &x);
            y = x / 0.4535;
            printf("in lb: %f", y);
            break;
        case 13:
            printf("Enter the value in atm:");
            scanf("%f", &x);
            y = x * 101325;
            printf("in pa: %f", y);
            break;
        case 14:
            printf("Enter the value in pa:");
            scanf("%f", &x);
            y = x / 101325;
            printf("in atm: %f", y);
            break;
        case 15:
            printf("Enter the value in fahrenheit:");
            scanf("%f", &x);
            y = ((x - 32) * 5) / 9;
            printf("in celsius: %f", y);
            break;
        case 16:
            printf("Enter the value in celsius:");
            scanf("%f", &x);
            y = (x * 9) / 5 + 32;
            printf("in fahrenheit: %f", y);
            break;
        case 17:
            printf("Enter the value in joule:");
            scanf("%f", &x);
            y = x * 0.23900;
            printf("in cal: %f", y);
            break;
        case 18:
            printf("Enter the value in cal:");
            scanf("%f", &x);
            y = x / 0.23900;
            printf("in joule: %f", y);
            break;
        default:
            printf("Invalid Choice!");
            break;
        }
    }
    return 0;
}