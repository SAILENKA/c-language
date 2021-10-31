#include<stdio.h>
int main()
{
    int num1,num2,ref,res=0;
    printf("Enter the numbers:");
    scanf("%d%d",&num1,&num2);
    ref=num1^num2;
    while(ref>0)
    {
        ref=(ref&(ref-1));
        res++;
    }
    printf("Number of bits difference:%d",res);
}
