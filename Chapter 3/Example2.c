/* Calculate simple interest for 3 sets of p,n,r */
#include<stdio.h>
void main(){
    int p,n,count;
    float si,r;
    for(count = 1; count<=3;count++){
        printf("\nEnter Principle, years and rate of interest: ");
        scanf("%d %d %f",&p,&n,&r);
        si = p*n*r/100;
        printf("Simple interest for year %d is %.2f \n",n,si);
    }
}
