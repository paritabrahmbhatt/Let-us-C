/*C Program to Find GCD of two Numbers*/

#include <stdio.h>

void main()
{
    int x,y,i,gcd;
    printf("Enter two number: ");
    scanf("%d %d",&x,&y);
    for(i = 1;i<=x && i<=y;i++)
    {
        if(x%i==0 && y%i ==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d", x, y, gcd);
}
