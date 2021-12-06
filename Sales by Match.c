#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int arr[101]={0},i,count=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&temp);
    arr[temp]++;
    }
    for(i=1;i<=100;i++)
    {
        count+=arr[i]/2;
    }
    printf("%d",count);  
}
