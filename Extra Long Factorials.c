#include<stdio.h>
int main()
{
    static int n,i;
    unsigned long long int sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum=sum*i;
    printf("%llu\n",sum); 
    }
}
