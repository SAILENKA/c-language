#include<stdio.h>
long long int power(int n,int p)
{
    if(p==0)
    return 1;
    int val=power(n,p/2);
    return p%2==0?val*val:val*val*n;
}
int main()
{
    int num,pow;
    scanf("%d%d",&num,&pow);
    printf("%d",power(num,pow));
}
