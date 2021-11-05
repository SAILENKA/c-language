#include<stdio.h>
static int i=2;
int lucky(int num)
{
 if(i>num)
 return 1;
 if(num%i==0)
 return 0;
 num=num-num/i;
 i++;
 return lucky(num);   
}
int main()
{
    int number;
    scanf("%d",&number);
    if(lucky(number)==1)
    printf("Lucky number");
    else
    printf("It is not a lucky number");
    
}
