#include<stdio.h>
int nthterm(int n,int a,int b,int c)
{
    if(n==1)
    return a;
    else if(n==2)
    return b;
    else if(n==3)
    return c;
    else
    return nthterm(n-1,a,b,c)+nthterm(n-2,a,b,c)+nthterm(n-3,a,b,c);
}
int main()
{
    int a,b,c,n;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    printf("%d",nthterm(n,a,b,c));
}
