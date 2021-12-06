#include<stdio.h>
int main()
{
    static int arr[1000000];
    int n,i,max,min,c=0,c1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    min=max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            c++;
        }
        if(arr[i]>max)
        {
            max=arr[i];
            c1++;
        }
    }
    printf("%d %d",c,c1);
}

