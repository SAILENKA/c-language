#include<stdio.h>
int main()
{
    int cata,catb,mouse,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&cata,&catb,&mouse);
        if(abs(cata-mouse)==abs(catb-mouse))
        printf("Mouse C\n");
        else if(abs(cata-mouse)<abs(catb-mouse))
        printf("Cat A\n");
        else
        printf("Cat B\n");
    }
}
