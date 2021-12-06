#include<stdio.h>
int main()
{
    int arr[10],n,k,sum=100,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    i=0;
    do
    {
        if(arr[i]==0)
        sum-=3;
        else
        sum-=1;
        i=(i+k)%n;
    }while(i!=0);
    printf("%d",sum);  
}
