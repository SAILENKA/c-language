#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(i=n-1;i>=0;i--)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    free(arr);
}
