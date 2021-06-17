//Range and Coefficient of range of Array
#include<stdio.h>
int main()
{
    int arr[] = {15, 16, 10, 9, 6, 7, 17};
    float max = arr[0],min=arr[0];
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<len;i++)
    {
        if(arr[i]<min)
            min = arr[i];
        if(arr[i]>max)
            max = arr[i];
    }
    int range = max-min;
    float coefficient_of_range = range /(max+min);
    printf("Range = %d\nCoefficient of Range = %f",range,coefficient_of_range);

}
