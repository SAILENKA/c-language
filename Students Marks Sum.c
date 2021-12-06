#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,sum=0,i,n;
    char ch;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",(arr+i));
    scanf("\n");
    scanf("%c",&ch);
    if(ch=='b')
    {
        for(i=0;i<n;i+=2)
        {
            sum+=*(arr+i);
        }
        printf("%d",sum);
    }
    else
    {
        for(i=1;i<n;i+=2)
        {
            sum+=*(arr+i);
        }
        printf("%d",sum);
    }
    
}
