#include<stdio.h>
#include<stdlib.h>
int update(int* a,int* b)
{
    int temp=*a;
    *a=temp+*b;
    *b=abs(temp-*b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    update(&a,&b);
    printf("%d\n%d",a,b);
}
