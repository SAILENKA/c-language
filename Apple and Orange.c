#include<stdio.h>
int main()
{
    long long int s,t,a,b,app,org,s1=0,s2=0,r;
    int i=1;
    scanf("%lld%lld%lld%lld%lld%lld",&s,&t,&a,&b,&app,&org);
    while(i++<=app)
    {
        scanf("%lld",&r);
        r+=a;
        if(r>=s&&r<=t)
        s1++;
    }
    i=1;
    while(i++<=org)
    {
        scanf("%lld",&r);
        r+=b;
        if(r>=s&&r<=t)
        s2++;
    }
    printf("%lld\n%lld",s1,s2);
}
