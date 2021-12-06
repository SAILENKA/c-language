#include<stdio.h>
int main()
{
    int i,j,n,k,c1,c2,c3;
    scanf("%d%d",&n,&k);
    c1=c2=c3=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(((i&j)<k)&&((i&j)>c1))
            c1=i&j;
            if(((i|j)<k)&&((i|j)>c2))
            c2=i|j;
            if(((i^j)<k)&&((i^j)>c3))
            c3=i^j;
        }
    }
    printf("%d\n%d\n%d",c1,c2,c3);
}

