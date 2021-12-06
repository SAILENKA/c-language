#include<stdio.h>
int main()
{
    int n,h,w,l;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&l,&w,&h);
        if(h<41)
        printf("%d",l*w*h);
    }
}
