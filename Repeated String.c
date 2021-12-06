#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[1000000];
    long long int i,j=0,count=0,n,m,k,temp=0;
    scanf("%s",str);
    scanf("%lld",&n);
    k=strlen(str);
    j=n/k;
    m=k*j;
    i=n%k;
    while(j--)
    {
        strcat(str1,str);
    }
    j=0;
    while(i--)
    {
        str1[m++]=str[j++];
    }
    j=0;
    while(strlen(str)!=j)
    {
        count=0;
        for(i=0;str1[i]!='\0';i++)
        {
            if(str[j]==str1[i])
            count++;
        }
        temp=count>temp?count:temp;
        j++;
    }
    printf("%lld",temp);
}
