// Write a program to print all prime numbers from 1 to 400.

#include<stdio.h>
void main(){
    int i,j,n=400,k,cnt=0;
    for(i=2;i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j == 0)
                break;
        }
        if(j==i){
            cnt++;
            printf("%d ",i);
        }
    }
    printf("\nTotal prime numbers: %d",cnt);
}
