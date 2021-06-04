//Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements.

#include <stdio.h>

void rotatebyone(int a[],int n)//n is the length of an array
{
    int i,temp = a[0];
    for(i=0;i<n-1;i++)
        a[i]=a[i+1];
    a[n-1]=temp;

}
void rotate(int a[],int d,int n)
{
    for(int i=0;i<d;i++)
        rotatebyone(a,n);
}
void printoutput(int a[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    rotate(a,2,n);
    printoutput(a,n);
}
