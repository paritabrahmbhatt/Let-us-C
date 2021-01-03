//A
//A B
//A B C
//A B C D
#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    char a = 'A';
    for(i=1;i<=n;i++){
        a = 'A';
        for(j=1;j<=i;j++){
            printf("%c ",a);
            a++;
        }
    printf("\n");
    }
}
