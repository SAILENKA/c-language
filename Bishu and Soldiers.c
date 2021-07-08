#include<stdio.h>
int main()
{
    int arr[10000],b[10000],n,i,s=0,q,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&q);
    for(i=0;i<q;i++)
    scanf("%d",&b[i]);
    for(i=0;i<q;i++)
    {
        s=0;
        int count=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]<=b[i])
            {
                s+=arr[j];
                count++;
            }
        }
        printf("%d %d",count,s);
        printf("\n");
    }
}
