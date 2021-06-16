//Check if a key is present in every segment of size k in an array

#include<stdio.h>
int findkey(int arr[],int len,int k, int key)
{
    int i=0,ans=0;
    while(i<len)
    {
        for(int j=1;j<=k;j++)
        {
           if(arr[i]==key)
           {
               ans=1;
               i++;
           }
           else
           {
               ans=0;
               i++;
           }
        }
    }
    if(ans==1)
        printf("%d is present in every segment",key);
    else
        printf("%d is not present in every segment",key);
}
int main()
{
    int arr[]={3,5,2,4,9,3,1,7,3,11,12,3},x=3,key=3;
    int len = sizeof(arr)/sizeof(arr[0]);
    findkey(arr,len,x,key);
}
