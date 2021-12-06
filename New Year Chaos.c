#include<stdio.h>
int main()
{
    static int arr[10000000];
    long long int i,n,t,count=0,ref,x=0;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    count=0;x=0;
     for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            if((arr[i]-arr[i+1])>2)
            {
            printf("Too chaotic\n");
            x=1;
            break;
            }
            else
            {
                ref=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=ref;
                count++;
            }
        }  
    }
    if(x!=1)
    printf("%lld\n",count);   
}
}
