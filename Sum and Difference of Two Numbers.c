#include<stdio.h>
int main()
{
    int a,b;
    float c,d;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    printf("%d %d",a+b,a-b);
    printf("\n%0.1f %0.1f",c+d,c-d);
}
