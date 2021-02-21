/* Write a program to sum given two integer numbers using function. */

void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    summ(a,b);
}

void summ(int x,int y)
{
    int ans;
    ans = x + y;
    printf("Sum of two numbers are %d",ans);
}
