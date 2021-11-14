#include<stdio.h>
int printLeader(int arr[],int n)
{
    int leader=arr[n-1],i;
    printf("%d\t",leader);
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]>leader)
        {
            leader=arr[i];
            printf("%d\t",leader);
        }
    }
}
int main()
{
    int arr[100],n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        printLeader(arr,n);
}
