#include<stdio.h>
int main()
{
    int n,count=0,count1=0,i;
    char str[100];
    scanf("%d",&n);
    scanf("\n");
    while(n--)
    {
        scanf("%[^\n]%*c",str);
         for(i=1;str[i]!='\0';i++)
         {
             if(str[i-1]=='1'&&str[i]=='9')
             count++;
             if(str[i-1]=='2'&&str[i]=='1')
             count1++;
         }   
    }
    count=count*4;
    count1=count1*3;
    count>count1?printf("Date"):printf("No Date");
}
