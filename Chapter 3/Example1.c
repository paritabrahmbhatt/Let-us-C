/* Calculate simple interest for 3 sets of p n and r */
#include<stdio.h>
void main(){
    int p,n,count = 1;
    float r,si;
    while(count <= 3)
    {
        printf("\nEnter Principle, years and rate of interest: ");
        scanf("%d %d %f",&p,&n,&r);
        si = p*n*r/100;
        printf("Simple interest for year %d is %f \n",n,si);
        count++;
    }
}
