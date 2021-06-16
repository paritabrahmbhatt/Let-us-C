//Write a function rotate array in right direction by one space.

void rotateright(int arr[],int n)
{
    int i,temp=arr[n-1];
    for(i=n-1;i>=0;i--)
        arr[i]=arr[i-1];
    arr[0]=temp;
}
void print_array(int arr[],int n)
{
    int i;
    for(i = 0; i<n;i++)
        printf("%d ",arr[i]);
}



void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    rotateright(arr,10);
    print_array(arr,10);

}
