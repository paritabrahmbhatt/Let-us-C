//Print the answer of the series (1/1! + 2/2! +3/3!...) using for loop.//

#include<stdio.n>
void main(){
    float i,fact = 1,n;
    float ans = 0,b;
    printf("Enter the number you like: ");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        fact = fact*i;
        printf("fact = %f, i = %f\n",fact,i);
        b = i/fact;
        ans = ans+ b;
        printf("ans = %f, b = %f\n",ans,b);
    }
    printf("Answer is: %.2f",ans);
}
