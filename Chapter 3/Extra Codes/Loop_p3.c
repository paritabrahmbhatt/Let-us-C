/* C Program to Display Fibonacci Sequence up to n terms */
//0,1,1,2,3,5,8,13,21,34.....

#include <stdio.h>

void main()
{
    int n,x = 0,y=1,nextterm,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",x);
        nextterm = x + y;
        x = y;
        y =nextterm;
    }
}
