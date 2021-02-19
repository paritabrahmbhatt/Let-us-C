/* Arithmetic Operations on data */
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

    ++*iptr;
    ++*cptr;
    ++*fptr;
    printf("\n\nAfter incrementing by 1 using pointer\n");
    printf("\nch\t\t%c\t\t%X",*cptr,cptr);
    printf("\nint\t\t%d\t\t%X",*iptr,iptr);
    printf("\nfl\t\t%.2f\t\t%X",*fptr,fptr);

    (*iptr)++;
    (*cptr)++;
    (*fptr)++;
    printf("\n\nAfter incrementing by 1 using pointer\n");
    printf("\nch\t\t%c\t\t%X",*cptr,cptr);
    printf("\nint\t\t%d\t\t%X",*iptr,iptr);
    printf("\nfl\t\t%.2f\t\t%X",*fptr,fptr);

}
