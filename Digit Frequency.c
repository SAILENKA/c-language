#include<stdio.h>
int main()
{
    int arr[10]={0},i,x;
    char str[100000];
    scanf("%s",str);
    while(str[i]!='\0')
    {
       
            x=str[i]-'0';
            if(x>=0&&x<=9)
            arr[x]++;
        i++;
    }
    printf("%d",i);
    for(i=0;i<10;i++)
    printf("%d ",arr[i]);
    
}
