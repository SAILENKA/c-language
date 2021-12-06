#include<stdio.h>
int main()
{
    int diff=0,i;
    char str[101],b[3]="sos";
    scanf("%s",str);
    for(i=0;i<str[i]!='\0';i++)
    {
        if(str[i]!=b[i%3])
        diff++;
    }
    printf("%d",diff);
}
