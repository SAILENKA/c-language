#include<stdio.h>
#include<math.h>
int main()
{
    double sum=0;
    int num,i,s;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
    sum+=log10(i);
   }
   s=floor(sum);
   printf("%d",s+1); 
}
