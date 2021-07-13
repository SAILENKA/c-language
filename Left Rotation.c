#include<stdio.h>
void left(int d,int* arr);
int main()
{
    int n,d,i;
    scanf("%d",&n);
    scanf("%d",&d);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    d=d%n;
    for(i=1;i<=d;i++)
    left(n,&arr[0]);
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}
void left(int n,int* arr)
{
    int i,temp=arr[0];
    for(i=0;i<n-1;i++)
        arr[i]=arr[i+1];
        arr[i]=temp;  
}
