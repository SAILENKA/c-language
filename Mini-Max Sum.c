#include<stdio.h>
int main()
{
    long long int s1=0,i=1,ele,n,m;
    scanf("%lld",&n);
    s1=m=n;
    while(i<=4)
    { 
    scanf("%lld",&ele);
    s1+=ele;
    if(n<ele)
    n=ele;
    if(ele<m)
    m=ele;
    i++;
    }
    printf("%lld %lld",s1-n,s1-m);
}
