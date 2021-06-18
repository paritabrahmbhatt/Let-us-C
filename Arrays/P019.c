//Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times.
//Find these repeating numbers in O(n) and using only constant memory space

#include<stdio.h>

int main()
{
    int arr[]={1, 2, 3, 6, 3, 6, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<len)
    {
        int temp = 0;
        for(int j = i+1;j<len;j++)
        {
            if(arr[i]==arr[j])
                temp++;
        }
        if(temp>0)
        {
            printf("%d ",arr[i++]);
        }
        else
            i++;

    }
}
