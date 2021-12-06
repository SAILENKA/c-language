#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str;
    int i=0;
    str=(char*)malloc(1000*sizeof(char));
    scanf("%[^\n]*s",str);
    while(str[i]!=0)
    {
        if(str[i]==' ')
        printf("\n");
        else
        printf("%c",str[i]);
        i++;
    }
}
