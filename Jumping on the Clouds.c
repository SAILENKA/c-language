#include<stdio.h>
int main()
{
    int n,arr[100],count=0,i=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;)
    {
        if(arr[i]==0)
        {
        count++;
        printf("%d",i);
        }
        if(arr[i]==0&&arr[i+2]==0)
        i=i+2;
        else
        i++;
    }
    printf("%d",count-1);
}
