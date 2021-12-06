#include<stdio.h>
int main()
{
    char str[100];
    static int arr[123]={0};
    long long int n,i=0,j,m;
    scanf("%s",str);
    scanf("%lld",&n);
    while(n--)
    {
        arr[str[i++]]++;
        if(i==3)
        i=0;
    }
    m=arr[97];
    for(i=98;i<=122;i++)
    {
        if(arr[i]>m)
        m=arr[i];
    }
    printf("%lld",m);
}
