#include<stdio.h>
int main()
{
    int a,b,c,count=0,sum,r,n;
    scanf("%d%d%d",&a,&b,&c);
    while(a<=b)
    {
        n=a;
        sum=0;
        while(n!=0)
        {
            r=n%10;
            sum=sum*10+r;
            n=n/10;
        }
        if((a-sum)%c==0)
        count++;
        a++;
    }
    printf("%d",count);
    
    
}
