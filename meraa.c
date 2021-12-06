#include<stdio.h>
int main()
{
    static int arr[1000000];
    long long int t,n,i,j,count,temp,pos;
    scanf("%lld",&t);
    while(t--)
    {
        count=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        for(i=0;i<n;i++)
        {
            pos=i;
            for(j=i+1;j<n;j++)
            if(arr[j]<arr[temp])
            pos=j;
            if(pos!=i&&abs(arr[j]-arr[i])<=3)
            {
                temp=arr[i];
                arr[i]=arr[pos];
                arr[pos]=temp;
                count++;
            }
            else
            {
                printf("%d%d",i,j);
                printf("Sasa");
                break;
            }
               
        }
    }
}
