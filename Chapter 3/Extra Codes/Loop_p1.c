/* C Program to Display Prime Numbers Between Two Intervals */

#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Prime numbers are: \n");


    if(a!=b){
            int c;
            while(a<=b)
                {
                for(c = 2;c <= a-1; c++)
                {
                    if(a % c == 0)
                        break;
                }
                if(c == a)
                    printf("%d \n",a);
                a++;
                }
            while(a>=b){
                for(c = 2; c <= b-1; c++){
                    if(b %c == 0)
                        break;
                }
                if(c == b){
                    printf("%d \n",b);
                }
                b++;
            }
    }
    else
        printf("Enter two distinct numbers");
}
