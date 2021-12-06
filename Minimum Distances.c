#include<stdio.h>
int main()
{
    int arr[10000],i,j,n,min=10000,dis;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
          if(arr[i]==arr[j])
          {
              if(j-i<min)
              min=j-i;
          }
        }  
    }
    if(min!=10000)
    printf("%d",min);
    else
    printf("-1");
}
