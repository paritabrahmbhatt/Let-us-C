//1
//2 3
//4 5 6
// for n rows
void main(){
    int i , j,b ,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        b=i;
        for(j=1;j<=i;j++){
            printf("%d ",b);
            b++;
        }
    printf("\n");
    }
    return 0;
}
