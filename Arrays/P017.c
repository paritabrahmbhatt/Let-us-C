//Union and Intersection of two sorted arrays

#include<stdio.h>

void main()
{
    int arr1[] = {1, 3, 4, 5,7};
    int arr2[] = {2, 3, 5, 6};
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    int i=0,j=0;
    printf("The intersection: ");

    for(i=0;i<len1;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d ",arr1[i]);
                i++;
            }
        }
    }

    //Let's find Union
    //1) Use two index variables i and j, initial values i = 0, j = 0
    //2) If arr1[i] is smaller than arr2[j] then print arr1[i] and increment i.
    //3) If arr1[i] is greater than arr2[j] then print arr2[j] and increment j.
    //4) If both are same then print any of them and increment both i and j.
    //5) Print remaining elements of the larger array.
    printf("\n\nThe Union: ");
    i=0,j=0;
    while(i<len1 && j<len2)
    {
        if(arr1[i]<arr2[j])
        {
            printf("%d ",arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            printf("%d ",arr2[j]);
            j++;
        }
        else
        {
            printf("%d ",arr1[i]);
            j++;
            i++;
        }
    }
    while(i<len1)
        printf("%d ",arr1[i++]);
    while(j<len2)
        printf("%d ",arr2[j++]);
}
