#include<stdio.h>
int digitalRoot(int n)
{
    if(n<=9)
    return n;
    return digitalRoot(n/10)+n%10;
}
int main()
{
    int number,sum;
    scanf("%d",&number);
    sum=digitalRoot(number);
    while(sum>9)
    {
        sum=digitalRoot(sum);
    }
    printf("%d",sum);
}
