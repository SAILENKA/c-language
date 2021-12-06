#include<stdio.h>
int main()
{
    static int arr[10000000000]={0};
    static int c[1000000000];
    c[0]=0;
    long long int n,m,i,j,a,b,k,temp;
    scanf("%lld%lld",&n,&m);
    while(m--)
    {
        scanf("%lld%lld%lld",&a,&b,&k);
        if(arr[a]==0)
        arr[a]+=k;
        if(arr[b]==0)
        arr[b]+=k;
    }
    for(i=1;i<=n;i++)
    {
        c[i]=arr[i-1]+arr[i];
    }
    k=c[0];
    for(i=1;i<=n;i++)
    if(c[i]>k)
    k=c[i];
    printf("%lld",k); 
}
