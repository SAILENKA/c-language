#include<stdio.h>
#include<string.h>
int main()
{
    int arr[26],i,sum=0;
    char a[10];
   for(i=0;i<26;i++)
   scanf("%d",&arr[i]);
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(sum<arr[a[i]-'a'])
        sum=arr[a[i]-'a'];
    }
    printf("%d",sum*strlen(a));
    
}
