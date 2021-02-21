/* An example function that takes two parameters 'x' and 'y' as input and returns max of two input numbers */

#include<stdio.h>
void main()
{
    int max(int x,int y){
        // Here x and y are formal parameters.
        if (x != y){
            if(x > y)
                return x;
            else
                return y;
        }
        else
            printf("Enter two distinct integers.");
    }
    int m = max(4,5); //4 and 5 are actual parameters
    printf("%d",m);
}

