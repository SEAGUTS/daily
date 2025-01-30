#include <stdio.h>
void main()
{
    char op;
    printf("Enter your operator (+ , - , * , /):");
    scanf("%c",&op);
    double n1,n2;
    scanf("%lf %lf",&n1,&n2);
    switch (op)
    {
    case '+':
        printf("Addition: %lf",n1+n2);
        break;
    case '-':
        printf("Subtraction: %lf",n1 - n2);
        break;
    case '*':
        printf("Multiplication: %lf",n1*n2);
        break;
    case '/':
        printf("Division: %lf",n1/n2);    
    default:
        printf("Invalid choice!");
        break;
    }
}