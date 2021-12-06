#include<stdio.h>
int main()
{
    int arr[10000],n,d,count,i,j,max=0;
    scanf("%d%d",&n,&d);
    for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    if(d!=0)
    {
    for(i=1;i<n-1;i++)
    {
        count=0;
        for(j=i+1;j<=n;j++)
        {
            if((arr[j]<=arr[i]+d)&&(arr[i]!=arr[j]))
            {
                if(arr[j]==arr[i]+d||arr[j]==arr[i]+d+d)
                count++;
            }
           if(count==2)
           max++;
        }
    }
    printf("%d",max);
}
}
