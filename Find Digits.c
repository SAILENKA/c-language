#include<stdio.h>
int main()
{
    int t,n,count=0,rem,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        n=m;
        count=0;
        while(n!=0)
        {
            rem=n%10;
            if(rem!=0&&m%rem==0)
            count++;
            n=n/10;
        }
        printf("%d\n",count);
    }
}
