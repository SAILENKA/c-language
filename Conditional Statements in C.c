#include<stdio.h>
int main()
{
    char *arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    scanf("%d",&n);
    if(n>9)
    printf("Greater than 9");
    else
    puts((arr[n]));
}
