//Count pairs with given sum
#include<stdio.h>

int countsum(int arr[],int len, int sum)
{
    int pair = 0;
    for(int i =0;i<len;i++)
    {
        int temp = 0;
        for(int j=i+1;j<len;j++)
        {
            temp = arr[i]+arr[j];
            if(temp==sum)
                pair++;
        }
    }
    printf("There are %d pairs with sum %d",pair,sum);
}
void main()
{
    int arr[] = {1, 5, 7, -1};
    int sum = 6;
    int len = sizeof(arr)/sizeof(arr[0]);
    countsum(arr,len,sum);
}
