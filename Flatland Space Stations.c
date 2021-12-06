#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100],n,m,min=1000,j,i,dist,max=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    scanf("%d",&arr[i]);
    i=0;
    while(i<n)
    {
        min=10000;
        for(j=0;j<m;j++)
        {
            dist=abs(i-arr[j]);
            if(dist<min)
            min=dist;
        }
        if(min>max)
        max=min;
        i++;
    }
    printf("%d",max);
    
}
