/* Program to Compute Quotient and Remainder */

#include <stdio.h>

void main()
{
    int divisor, dividend , quotient, remainder;
    printf("Enter Divisor: ");
    scanf("%d",&divisor);
    printf("Enter Dividend: ");
    scanf("%d",&dividend);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("Quotient is %d and remainder is %d",quotient,remainder);
}
