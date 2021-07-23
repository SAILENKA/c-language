#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char ch,str[50],s[100];
    scanf("%c",&ch);
    scanf("%s",str);
    scanf("\n");
    scanf("%[^\n]%*c",s); 
    printf("%c",ch);
    printf("\n%s",str);
    printf("\n%s",s);
    return 0;
}
