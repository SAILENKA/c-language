#include<stdio.h>
int main()
{
    int arr[100000],count=0,c=0;
    int i=1,j,n,m,ele;
    scanf("%d%d",&n,&m);
    scanf("%d",&arr[0]);
    n=n-1;
    while(n--)
    {
        scanf("%d",&ele);
        if(ele!=arr[i-1])
        arr[i++]=ele;
    }
    while(m--)
    {
        scanf("%d",&ele);
        count=0;
        for(i=0;arr[i]!='\0';i++)
        {
            if(ele<=arr[i])
            count++;
            if(ele==arr[i])
            break;
        }
        printf("%d",count+1);
     } 
}
