#include<stdio.h>
int setbit(int m)
{
    int res=0;
    while(m>0)
    {
        m=m&(m-1);
        res++;
    }
    return res;
}
int main()
{
    int tst,l,r,k,num,i,j;
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%d%d%d",&r,&l,&k);
        num=l+1; 
        for(i=r;i<=l;i++)
        {
            if(setbit(i)==k)
            {
                if(i<num)
                num=i;
            }
        }
        if(num!=l+1)
        printf("%d",num);
        else
        printf("-1");
        printf("\n");
    }
}
