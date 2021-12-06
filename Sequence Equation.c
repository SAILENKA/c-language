#include<stdio.h>
int main()
{
    int n,i,arr[100],j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(arr[arr[j]]==i)
        printf("%d\n",j);
    }
        
}
