#include<stdio.h>
int second(int arr[],int n)
{
    int i,large=0,sel=-1;
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[large])
        {
        sel=large;
        large=i;
        }
        else
        {
            if(arr[i]!=arr[large])
            {
                if(sel==-1||arr[i]>arr[sel])
                sel=i;
            }
        }
    }
    printf("second largest position:%d",sel);
}

int main()
{
    int arr[1000],i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    second(arr,n);  
}
