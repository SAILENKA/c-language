#include<stdio.h>
int main()
{
    int number,count=0,i;
    printf("Enter the positive number:");
    scanf("%d",&number);
    for(i=5;i<=number;i=(i*5))
    count+=number/i;
    printf("The number of trailing zeros in factorial of given number:%d",count);
}
