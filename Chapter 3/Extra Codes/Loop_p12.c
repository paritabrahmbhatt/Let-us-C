/* C Program to Check Whether a Number is Palindrome or Not */
// An integer is a palindrome if the reverse of that number is equal to the original number.

#include<stdio.h>
void main()
{
    int n,rev = 0,rem = 0,x;
    printf("Enter a number: ");
    scanf("%d",&n);
    x = n;
    while(n != 0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n/= 10;
    }
    if(x == rev)
        printf("%d is a palindrome",x);
    else
        printf("%d is not a palindrome",x);

}
