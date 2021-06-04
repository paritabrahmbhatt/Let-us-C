//Find largest and smallest elements of an array using pointers.

#include <stdio.h>

void minandmax(int arr[],int len,int *min,int *max)
{
    *min = *max = arr[0];
    int i;
    for(i=1;i<len;i++)
    {
        if(arr[i]>*max)
            *max = arr[i];
        if(arr[i]<*min)
            *min = arr[i];
    }
}
void main()
{
    int arr[]={1,22,445,67,8,9,9,43,2,43,4,6,5,7,8,5,3,3,6,8,988,5553,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    int min,max;
    minandmax(arr,len,&min,&max);
    printf("Min and max is %d and %d respectively.",max,min);
    return 0;
}
