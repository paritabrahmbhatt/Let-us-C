/*C Program to Find Factorial of a Number*/
#include <stdio.h>

void main()
{
    int i = 1,fact = 1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact = fact*i;
    printf("Factorial of first %d numbers is %d",n,fact);
}
