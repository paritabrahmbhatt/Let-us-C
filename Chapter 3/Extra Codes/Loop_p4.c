/* C Program to Find the Largest Number Among Three Numbers */

#include <stdio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        if(a>c)
            printf("The largest Number is %d",a);
        else
            printf("The largest Number is %d",c);

    }
    else{
        if(b > c)
            printf("The largest Number is %d",b);
        else
            printf("The largest Number is %d",c);
    }

}
