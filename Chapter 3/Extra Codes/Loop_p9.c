/* Program to Count the Number of Digits */

#include<stdio.h>

void main()
{
    int count=0;
    long long n;
    printf("Enter a number: ");
    scanf("%lld",&n);
    while(n != 0){
        n /= 10;
        count++;
    }
    printf("Count is %d",count);
}
