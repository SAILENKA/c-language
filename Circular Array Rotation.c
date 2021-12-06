#include<stdio.h>
int main()
{
    int n,r,q,i;
    scanf("%d%d%d",&n,&r,&q);
    i=n;
    if(r==1)
    i=n;
    else
    {
    r=r-1;
    while(r--)
    {
      i--;  
    }
    while(q--)
    {
        scanf("%d",&r);
        if(i+r<=n)
        printf("%d",i+r);
        else
        printf("%d",(i+r)%n);
    }
  }
}
