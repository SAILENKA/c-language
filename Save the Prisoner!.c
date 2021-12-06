#include<stdio.h>
int main()
{
   long long int t,n,m,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&n,&m,&s);
        n=m%n;
        printf("%lld\n",n+s-1);
    }
}
