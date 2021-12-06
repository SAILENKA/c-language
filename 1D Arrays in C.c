#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
    free(arr);
}
