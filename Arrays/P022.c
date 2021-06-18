//Non-Repeating Element
#include<stdio.h>

int main()
{
    int arr[] = {-1,2,-1,3,2};
    int len = 5;
    printf("Non-repeating elements:\n");
    for(int i=0;i<len;i++)
    {
        int temp = 0;
        for(int j = 0;j<len;j++)
        {
            if(i!= j && arr[i] == arr[j])
                temp++;
        }
        if(temp == 0)
            printf("%d ",arr[i]);
    }
}
