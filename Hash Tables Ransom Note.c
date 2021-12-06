#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char *s[30000],*s1[30000];
   long long int m,n,count=0,i,j,k,cn=0,c;
   scanf("%lld%lld",&m,&n);
   for(i=0;i<m;i++)
   {
   s[i]=(char*)malloc(10*sizeof(char));
   scanf("%s",s[i]);
   }
   for(i=0;i<n;i++)
   {
   s1[i]=(char*)malloc(10*sizeof(char));
   scanf("%s",s1[i]);
   }
   for(i=0;i<n;i++)
   {
       c=0;
       count=0;
       for(k=0;k<n;k++)
       {
       if(s1[i]==s1[k])
       c++;
       printf("%lld",c);
      }
       for(j=0;j<m;j++)
           {
               if(s1[i]==s[j])
           count++;
           printf("%lld",count);
           }
       if(count==c)
       cn++;
       printf("\n"); 
   }
   printf("%lld",cn);
   if(cn==n)
   printf("yes");
   else
   printf("No");
}

