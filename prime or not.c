#include<stdio.h>
int main()
{
    int number,i,count=0;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number==1)
    printf("Not prime");
    else if(number==2||number==3)
    printf("prime");
    else if(number%2==0||number%3==0)
    printf("Not prime");
    else
    {
        for(i=5;i*i<=number;i+=6)
        {
            if(number%i==0||number%(i+2)==0)
            count++;
        }
        if(count!=0)
        printf("It is not a prime");
        else
        printf("It is a prime");
    }
    
}
