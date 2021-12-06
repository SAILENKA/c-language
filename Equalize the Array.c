#include<stdio.h>
int main()
{
    int arr[101]={0},n,max,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&max);
        arr[max]++;
    }
    max=arr[0];
    for(i=1;i<101;i++)
    if(arr[i]>max)
    max=arr[i];
    printf("%d",n-max); 
}
