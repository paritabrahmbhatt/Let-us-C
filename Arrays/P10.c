// Write a program to find kth largest element in Unsorted array

#include <stdio.h>
void descending(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          int temp=0;
            if(arr[j]>arr[i])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
    }
}
void findkthlargest(int arr[],int len,int k)
{
    if(k<len)
    {
        descending(arr,len);
        printf("The largest %d element is %d",k,arr[k-1]);
    }
    else
        printf("Wrong value of k");
}
void main()
{
    int arr[] = {1,3,44,5,5666,55,344,333,100};
    int len = sizeof(arr)/sizeof(arr[0]);
    findkthlargest(arr,len,3);
}
