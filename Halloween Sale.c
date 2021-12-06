#include<stdio.h>
int main()
{
    int p,d,m,b,sum=0,count=0;
    scanf("%d%d%d%d",&p,&d,&m,&b);
    while(sum<=b)
    {
        if(p>m)
        {
            sum+=p;
            p=p-d;
        }
        else
        {
            sum+=m;
        }
        count++;
    }
    if(sum>b)
    printf("%d",count-1);
    else
    printf("%d",count);
    
}
