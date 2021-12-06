#include<stdio.h>
int main()
{
    char str[10000000];
    int n,step=0,count=0,i;
    scanf("%d",&n);
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='U')
        step++;
        else
        step--;
        if(step==0&&str[i]=='U')
        count++;
   }
    printf("%d",count);
}

