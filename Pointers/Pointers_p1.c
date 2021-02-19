/* Write a program to print the address of variable and its value */
#include <stdio.h>
#include <conio.h>

void main()
{
    char a = 'a';
    int b = 2;
    float c = 30.5;
    printf("Name\t\tValue\t\tAddress");
    //%X and & is used to access the address
    printf("\nch\t\t%c\t\t%X",a,&a);
    printf("\nint\t\t%d\t\t%X",b,&b);
    printf("\nfl\t\t%.2f\t\t%X",c,&c);
}
