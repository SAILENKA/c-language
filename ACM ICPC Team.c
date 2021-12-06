#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str[500];
    int i,j,sub[10000]={0},max=0,count,k,l=0,n,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        str[i]=(char*)malloc(m*sizeof(char));
        scanf("%s",str[i]);    
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            count=0;
            for(k=0;k<m;k++)
            if(str[i][k]=='1'||str[j][k]=='1')
            count++;
            sub[l++]=count;
        if(count>max)
        max=count;  
        }    
    }
    count=0;
    for(i=0;i<10000;i++)
    if(sub[i]==max)
    count++;
    printf("%d\n%d",max,count);
}
