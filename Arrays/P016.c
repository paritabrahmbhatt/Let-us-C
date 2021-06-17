//Move all negative numbers to beginning and positive to end with constant extra space
#include<stdio.h>
void main()
{
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int a = arr[0];
    for(int i=1;i<len;i++)
    {
        for(int j = i+1;j<len;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i =0;i<len;i++) printf("%d ",arr[i]);
}
