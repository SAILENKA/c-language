#include<stdio.h>
int main()
{
    int n=5,sum=0,k;
    scanf("%d",&k);
    while(k--)
    {
        sum+=n/2;
        n=(n/2)*3;
    }
    printf("%d",sum);
}
