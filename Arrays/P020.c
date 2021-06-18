//Find common elements in three sorted arrays

#include<stdio.h>

int findcommon(int arr1[],int arr2[],int arr3[], int len1, int len2, int len3)
{
    for(int i=0; i<len1;i++)
    {
        int temp = 0;
        for(int j=0;j<len2;j++)
        {
            for(int k = 0; k<len3;k++)
               {
                   if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
                    temp++;
               }
        }
        if(temp>0)
            printf("%d ",arr1[i]);
    }
}

int main()
{
    int ar1[] = {1, 5, 10, 20, 40, 80} ,ar2[] = {6, 7, 20, 80, 100} ,ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int len1=sizeof(ar1)/sizeof(ar1[0]);
    int len2=sizeof(ar2)/sizeof(ar2[0]);
    int len3 = sizeof(ar3)/sizeof(ar3[0]);
    findcommon(ar1,ar2,ar3,len1,len2,len3);
}
