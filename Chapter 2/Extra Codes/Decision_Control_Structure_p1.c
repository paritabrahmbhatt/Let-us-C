/* Program to Check Even or Odd */

#include <stdio.h>

void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2 == 0)
        printf("Entered number is an even number");
    else
        printf("Entered number is an odd number");
}
