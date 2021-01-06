// According to a study, the approximate intelligence level can be calculated using the following formula:
// i = 2 + (y+0.5x)
// Write a program which will produce a table of values of i,y and x where y varies from 1 to 6, and ,
// for each values of y, x varies from 5.5 to 12.5 in steps of 0.5

#include<stdio.h>
void main(){
    int y;
    float i,x;
    printf("x  y  i\n");
    for(y=1;y<=6;y++){
        for(x=5.5;x<=12.5;x+=0.5){
            i = 2 +(y+0.5*x);
            printf("\n%.1f  %d  %.1f", x,y,i);
        }
    }
    return 0;
}
