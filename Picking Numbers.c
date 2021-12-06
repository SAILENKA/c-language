#include<stdio.h>
int main()
{
    int i,j,n,arr[1000],min,temp,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
     for (i = 0;i< n-1;i++)  
      {  
        min = i;  
        for (j=i+1;j<n;j++)
        { 
            if (arr[j]<arr[min])  
            min=j;
        }
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
        temp=0;
        for(i=0;i<n;i++)
        {
            count=0;
            for(j=i;j<n;j++)
            {
                if(arr[i]==arr[j]||arr[i]+1==arr[j])
                count++;
            }
            if(count>temp)
            temp=count;
        }
        printf("%d",temp);      
}
