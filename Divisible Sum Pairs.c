#include<stdio.h>
int main()
{
    static int arr[100];
    int n,valid=0,i,j,d;
    scanf("%d",&n);
    scanf("%d",&d);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])%d==0)
            valid++;
        }
    }
    printf("%d",valid);
    
}
