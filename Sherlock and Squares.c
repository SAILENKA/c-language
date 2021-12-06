#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,count=0,i,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
    i=sqrt(a);
    if(i*i==a)
    count=1;
    else
    count=0;
    i++;
while(i<=b)
    {
        if((i*i)>=a&&i*i<=b)
        count++;
        else
        break;
        i++;
    }
    printf("%d\n",count);
    }
   
    
}
