//Write a program to print the following numbers in reverse order:
// 34 56 32 67 89 80 32 21

void main(){
    int i;
    int a[9] = {34,56,54,32,67,89,80,32,21};
    for(i=0;i<9;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=8;i>=0;i--){
        printf("%d ",a[i]);
    }

}
