#include<stdio.h>
int main()
{
    int n,t,i,max,min=0;
    scanf("%d%d",&n,&t);
    for(i=0;i<n;i++)
    {
        scanf("%d",&max);
        min=min>max?min:max;
    }
    if(min>t)
    printf("%d",min-t);
    else
    printf("0");
}
