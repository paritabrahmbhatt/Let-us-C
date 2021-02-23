/* Multiplication Table Up to a range */

#include <stdio.h>

void main()
{
    int n,r,i = 1,ans;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nEnter a range: ");
    scanf("%d",&r);
    while(i<=r)
    {
        ans = i * n;
        printf("%d x %d = %d\n",n,i,ans);
        i++;
    }
}
