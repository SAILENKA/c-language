#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct triangle
{
    int a;
    int b;
    int c;
    int area;
};
int main()
{
    int n,i,A,B,C,p;
    scanf("%d",&n);
   struct triangle *t= malloc(n*sizeof(triangle));
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&A,&B,&C);
        p=(A+B+C)/2;
        t[i].area=sqrt(p*(p-A)+p*(p-B)+p*(p-C));
        t[i].a=A;
        t[i].b=B;
        t[i].c=C;
    }
}

