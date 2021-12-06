#include<stdio.h>
int main()
{
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    if(arr[i]>=38)
    {
        int r=arr[i]%5;
        if(r>=3)
        arr[i]=arr[i]-r+5;
    }
}
for(i=0;i<n;i++)
printf("%d\n",arr[i]);   
}
