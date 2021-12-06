#include<stdio.h>
int main()
{
   static int arr[100000];
   int n,t,i,j,min;
   scanf("%d%d",&n,&t);
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   while(t--)
   {
       scanf("%d%d",&i,&j);
       min=99999999;
       for(;i<=j;i++)
       {
           if(arr[i]<min)
           min=arr[i];
       }
       printf("%d\n",min);
   }
}
