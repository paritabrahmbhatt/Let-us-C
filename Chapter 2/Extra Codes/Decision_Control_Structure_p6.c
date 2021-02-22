/*Program to Check Leap Year*/
// A year is a leap year if,
// (a) It is divisible by 400 OR
// (b)It is divisible by 4 and not divisible by 100.
void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year % 400 == 0)
        printf("%d is a leap year",year);

    else if(year % 4 == 0 && year % 100 != 0)
        printf("%d is a leap year",year);

    else
        printf("%d is not a leap year",year);
}
