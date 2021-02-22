/* C Program to Multiply Two Floating-Point Numbers */
#include <stdio.h>

void main()
{
    float a,b;
    double c;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    c = a*b;
    printf("Sum of two numbers is %.2lf",c);
}
