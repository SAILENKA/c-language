#include<stdio.h>
int main()
{
    int a[3],b[3],s1=0,s2=0,i=3;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    scanf("%d%d%d",&b[0],&b[1],&b[2]);
    while(i--)
    {
        if(a[i]>b[i])
        s1++;
        if(b[i]>a[i])
        s2++;
    }
    printf("%d %d",s1,s2);
}
