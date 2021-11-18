#include<stdio.h>
int main()
{
    int arr[100],i,fre=1,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter in sorting order");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    i=1;
    while(i<n)
    {
        while(i<n&&arr[i]==arr[i-1])
        {
            fre++;
            i++;
        }
        printf("\n%d is %d",arr[i-1],fre);
        i++;
        fre=1;
      }
      if(fre==1||arr[n-1]!=arr[n-2])
      printf("\n%d is 1",arr[n-1]);
    }
