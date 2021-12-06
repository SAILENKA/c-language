#include<stdio.h>
int main()
{
    int arr[1000],n,i,v;
    scanf("%d%d",&v,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==v)
        v=i;
    }
    printf("%d",v);
}
