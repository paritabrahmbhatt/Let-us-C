// Write a function rotate array in left direction by one space.
#include<stdio.h>

void leftrotate_by_one(int arr[],int n) //n is the size of an array
{
    int temp,i;
    temp = arr[0];
    for(i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    arr[n-1]=temp;
}
void print_array(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    leftrotate_by_one(arr,10);
    print_array(arr,10);
    return 0;

}
