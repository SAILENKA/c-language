#include<stdio.h>
int main()
{
    int t,n,c,r,count=0,rem,bar;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d%d%d",&n,&c,&r);
        count=bar=n/c;
        while(bar>=r)
        {
             count+=bar/r;
            rem=bar%r;
            bar=bar/r+rem;
        }
        printf("%d\n",count);
    }
}

