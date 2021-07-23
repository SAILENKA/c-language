#include<stdio.h>
int large(int a,int b,int c,int d)
{
    return(a>b&&a>c&&a>d)?a:((b>c&&b>d)?b:(c>d?c:d));
}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%d",large(a,b,c,d));
    return 0;
}
