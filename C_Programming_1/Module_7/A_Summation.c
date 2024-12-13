#include<stdio.h>
int main()
{
    int arr[1000],i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    if(sum<0)
    {
        printf("%d",-sum);
    }
    else
    {
        printf("%d",sum);
    }
    return 0;
}
     