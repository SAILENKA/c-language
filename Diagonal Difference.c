#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100][100],sum1=0,sum2=0,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
        sum1+=arr[i][j];
        if(j==(n-i-1))
        sum2+=arr[i][j];
        }
    printf("%d",abs(sum1-sum2));
  }
