// Write a program to check whether any of the digits in a number appears more than once
#include <stdio.h>
void main(){
    int rem;
    long n;
    printf("Enter an integer number ");
    scanf("%li",&n);
    int a[10] = {0};
    while(n>0){
        rem = n % 10;
        if (a[rem]== 1)
            break;
        a[rem] = 1;
        n = n/10;
    }
    if(n> 0)
        printf("YES");
    else
        printf("NO");

}
