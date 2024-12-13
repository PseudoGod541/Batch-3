#include<stdio.h>
int main()
{
    int arr[10000],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
    {
        arr[i]=1;
    }
    else if(arr[i]<0)
    {
        arr[i]=2;
    }
    else
    {
        arr[i]=0;
    }
    }
    for(i=0;i<n;i++)
    
    printf("%d ",arr[i]);
}
    
  
     