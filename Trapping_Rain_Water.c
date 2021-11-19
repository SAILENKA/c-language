#include<stdio.h>
int getWater(int n)
{
    int arr[n],lmax[n],rmax[n],i,res=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    lmax[0]=arr[0];
    for(i=1;i<n;i++)
    lmax[i]=max(lmax[i-1],arr[i]);
    rmax[n-1]=arr[n-1];
    for(i=n-2;i>=0;i--)
    rmax[i]=max(rmax[i+1],arr[i]);
    for(i=1;i<n-1;i++)
    res+=(min(rmax[i],lmax[i])-arr[i]);
    return res;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b?a:b;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",getWater(n));
    return 0;
}
