// Sort an array in ascending order

#include <stdio.h>
void ascending(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          int temp=0;
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
    }
}
void printoutput(int a[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
void main()
{
    int arr[] = {9,1,4,2,5,8,3,7,6},n;
    n = sizeof(arr)/sizeof(arr[0]);
    ascending(arr,n);
    printoutput(arr,n);

}
