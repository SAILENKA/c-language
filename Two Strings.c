#include<stdio.h>
int main()
{
    char str[100000],str2[100000];
    int p,count=0,i,j;
    scanf("%d",&p);
    while(p--)
    {
        scanf("%s",str);
        scanf("%s",str2);
        for(i=0;i<str[i]!='\0';i++)
        for(j=0;j<str2[j]!='\0';j++)
        if(str[i]==str2[j])
        count++;
        if(count!=0)
        printf("Yes\n");
        else
        printf("No\n");
        count=0;
    }
}
