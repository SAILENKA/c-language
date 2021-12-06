#include<stdio.h>
int main()
{
   long long int arr[1000000],n,i,big=0,count=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       if(arr[i]>big)
       big=arr[i];
   }
   i=0;
   while(i<n)
   {
       if(arr[i++]==big)
       count++;
   }
   printf("%d",count);
   
}
