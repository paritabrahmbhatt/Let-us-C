/*  Write a program to print the data using pointers */
#include <stdio.h>
#include <conio.h>

void main()
{
    char a = 'a';
    int b = 2;
    float c = 30.5;
    char *cptr = &a;
    int *iptr = &b;
    float *fptr = &c;
    printf("Name\t\tValue\t\tAddress");
    printf("\nch\t\t%c\t\t%X",*cptr,cptr);
    printf("\nint\t\t%d\t\t%X",*iptr,iptr);
    printf("\nfl\t\t%.2f\t\t%X",*fptr,fptr);
}
