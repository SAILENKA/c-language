
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    long long int i=0,count=0,n,m,k,j;
    scanf("%s",str);
    scanf("%lld",&n);
    if(strlen(str)==1&&str[0]=='a')
    printf("%lld",n);
    else if(strlen(str)==1)
    {
        printf("%lld",n-n);
    }
    else
    {
   m=strlen(str);
   j=n%m;
   i=0;
   while(str[i]!='\0')
   {
       if(str[i++]=='a')
       count++;
   }
   count=count*(n/m);
   i=0;
   while(j--)
   {
       if(str[i++]=='a')
       count++;
   }
   printf("%lld",count);  
}
}


