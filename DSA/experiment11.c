#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    // User input for coefficients
    printf("Enter coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of roots
    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %lf and %lf\n", root1, root2);
    } else if (discriminant == 0) {
        // Real and equal roots
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %lf\n", root1);
    } else {
        // Imaginary roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary: %lf + %lfi and %lf - %lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
