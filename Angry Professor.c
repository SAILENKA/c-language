#include<stdio.h>
int main()
{
    int n,t,k,c=0,var,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&var);
            if(var<=0)
            c++;
        }
        if(c>=k)
        printf("NO\n");
        else
        printf("YES\n");
            
    }
}
