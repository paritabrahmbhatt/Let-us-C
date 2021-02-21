/* An example function that takes two parameters 'x' and 'y' as input and returns min of two input numbers */

#include<stdio.h>
void main()
{
    int min(int x,int y){
        if (x != y){
            if(x < y)
                return x;
            else
                return y;
        }
        else
            printf("Enter two distinct integers.");
    }
    int m = min(4,5);
    printf("%d",m);
}
