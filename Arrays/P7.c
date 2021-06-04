//Find largest and smallest elements of an array

#include <stdio.h>

void main()
{
    int a[] = {1,2,3,4,442,2,4,43,21,3,33334,1};
    int len = sizeof(a)/sizeof(a[0]);
    int max=a[0],min=a[0];
    for(int i =1; i<len;i++)
    {
        if(max>a[i])
            max=a[i];
        if(min<a[i])
            min=a[i];
    }
    printf("The largest and smallest element of this array is %d and %d",min,max);
}
