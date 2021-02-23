/* Power of a Number Using the while Loop */

#include<stdio.h>
void main()
{
    int n,p,pow=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter power: ");
    scanf("%d",&p);
    while(p>=1)
    {
        pow = pow * n;
        p--;
    }
    printf("Answer is %d",pow);
}
