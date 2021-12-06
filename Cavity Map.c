#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *arr[100];
    int n,i,max=-1,store,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        arr[i]=(char*)malloc(n*sizeof(char));
       scanf("%s",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        max=-1;
        for(j=0;j<n;j++)
        {
           if(arr[i][j]-'0'>max)
           {
           max=arr[i][j]-'0';
           store=j;
           }
        }
        if(store!=0&&store!=n-1)
        arr[i][store]='X';
        printf("%s\n",arr[i]);
    }
    
}
