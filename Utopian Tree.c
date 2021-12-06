#include<stdio.h>
int main()
{
    int t,var,sum,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&var);
        sum=1;
        for(i=1;i<=var;i++)
        {
            if(i%2!=0)
            sum+=1;
            else
            sum*=sum;
        }
        printf("%d\n",sum);
    }
}
