#include<stdio.h>
int main()
{
    char *p[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    long long int a,b,i;
    scanf("%lld%lld",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i<=9)
        printf("%s",*(p+i));
        else if(i%2==0)
        printf("even");
        else
        printf("odd");
        printf("\n");
    }
    
}
