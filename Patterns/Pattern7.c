//A B C D
//A B C
//A B
//A

#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    char a;
    for(i=n;i>=1;i--){
        a = 'A';
        for(j=1;j<=i;j++){
            printf("%c ",a);
            a++;
        }
    printf("\n");
    }
}
