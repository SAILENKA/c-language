#include<stdio.h>
int main()
{
    int count=0,i,n;
    char str[101];
    scanf("%d",&n);
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='1'&&str[i-1]=='0'&&str[i+1]=='0')
        {
        count++;
        i+=2;
        }
    }
    printf("%d",count);
}
