/*Sum of Natural Numbers Using for Loop*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i = 1,ans = 0;
    while(i<=n)
    {
        ans = ans + i;
        i++;
    }
    printf("Sum of first %d natural numbers is %d",n,ans);
}
