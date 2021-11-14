#include<stdio.h>
int MovesToEnd(int arr[],int n)
{
    int c=0,i=0;
    for(i;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[c];
            arr[c]=temp;
            c++;
        }
    }
}
int main()
{
    int arr[100],n,i;
    printf("Enter the number of arrays:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    MovesToEnd(arr,n);
    printf("After\n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    
}
