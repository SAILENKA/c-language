#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];
    int n,k,i;
    scanf("%s",str);
    scanf("%s",str1);
    scanf("%d",&n);
    for(i=0;str1[i]!=0;i++)
    {
    if(str1[i]!=str[i])
    break;
    }
    k=strlen(str)-i;
   k+=strlen(str1)-i;
   if(k<=n)
   printf("Yes");
   else
   printf("No");
    
}
