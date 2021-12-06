#include<stdio.h>
#include<stdlib.h>
int main()
{
    int d1,d2,m1,m2,y1,y2;
    scanf("%d%d%d",&d1,&m1,&y1);
    scanf("%d%d%d",&d2,&m2,&y2);
    if(d1==d2&&m1==m2&&y1==y2)
    printf("0");
    else if(d1!=d2&&m1==m2&&y1==y2)
    printf("%d",15*abs(d1-d2));
    else if(d1!=d2&&m1!=m2&&y1==y2)
    printf("%d",500*abs(m1-m2));
    else
    printf("10000");
    
}
