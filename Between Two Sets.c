#include<stdio.h>
int main()
{
    int n,m,a[100],b[100],k,c=0,s=0,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=a[n-1];i<=b[0];i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i%a[j]==0)
            c++;
        }
        for(k=0;k<m;k++)
        {
            if(b[k]%i==0)
            c++;
        }
        if(c==m+n)
        s++;
    }
    printf("%d",s);
}
