//Find the Missing Number

int findthenumber(int arr[], int len)
{
    int sum = ((len+1) * (len+2))/2;
    for(int i=0;i<len;i++)
    {
        sum = sum - arr[i];
    }
    if(sum != 0)
        printf("Missing Value is: %d",sum);
    else printf("No missing Value");
}
int main()
{
    int arr[] = {1,2,5,6,7,8,9,3,4,11};
    int len = sizeof(arr)/sizeof(arr[0]);
    findthenumber(arr,len);
}
