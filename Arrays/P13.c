//Maximum OR sum of sub-arrays of two different arrays

#include<stdio.h>

int orsum(int a[],int b[],int len)
{
    int suma=0,sumb=0;
    for(int i=0;i<len;i++)
    {
        suma = a[i]|suma;
        sumb |= b[i];
    }
    int ans = suma+sumb;
    printf("The Max OR sum is %d",ans);
}
int main()
{
    int arr1[]={1,2,4,5,2};
    int arr2[]={2,3,3,12,1};
    int len = sizeof(arr1)/sizeof(arr1[0]);
    orsum(arr1,arr2,len);
}
