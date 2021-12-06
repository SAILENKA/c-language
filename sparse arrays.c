#include<stdio.h>
#include<string.h>
int main()
{
    int n,q,i,j,count;
    scanf("%d",&n);
    char arr[n][20];
    for(i=0;i<n;i++)
    scanf("%s",&arr[i]);
    scanf("%d",&q);
    char query[q][20];
    for(i=0;i<q;i++)
    scanf("%s",&query[i]);
    for(i=0;i<q;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        if(strcmp(query[i],arr[j])==0)
        count++;
        printf("%d\n",count);
    }
}
