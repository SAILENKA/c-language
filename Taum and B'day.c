#include<stdio.h>
int main()
{
    int t,w,b,wc,bc,z,cost;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d%d",&b,&w,&bc,&wc,&z);
        if(bc==wc)
        printf("%d\n",b*bc+w*wc);
        else
        {
            if(wc<bc)
            {
                cost=wc*w;
                if(wc+z<bc)
                cost+=b*(wc+z);
                else
                cost+=b*bc;
            }
            else
            {
                cost=b*bc;
                if(bc+z<wc)
                cost+=w*(bc+z);
                else
                cost+=w*wc;
            }
            printf("%d\n",cost);
        }
    }
}