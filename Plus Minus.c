#include<stdio.h>
int main()
{
    int arr[200],i,n;
   float c=0,m=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
        c++;
        else if(arr[i]>0)
        k++;
        else
        m++;
    }
    printf("%.6f\n%.6f\n%.6f",(k/n),(c/n),(m/n));
}
