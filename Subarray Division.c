#include<stdio.h>
int main()
{
    static int arr[10000];
    int n,d,m,i,c=0,sum,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&d);
    scanf("%d",&m);
    for(i=0;i<=n-m;i++)
    {
        sum=0;
        for(j=i;j<i+m;j++)
        sum+=arr[j];
        if(sum==d)
        c++;
    }
    printf("%d",c);
}
