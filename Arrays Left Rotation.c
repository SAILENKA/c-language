#include<stdio.h>
int main()
{
    static int arr[1000000];
    long long n,i,m,j;
    scanf("%lld",&n);
    scanf("%lld",&m);
    for(i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    i=0;
    j=n;
    while(n--)
    {
        printf("%lld ",arr[(m+i)%j]);
        i++;
    }
}
