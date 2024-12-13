#include<stdio.h>
int main()
{
    int arr[10000],i,n,even=0,odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even=even+arr[i];
        }
        else
        {
            odd=odd+arr[i];
        }
    }
    printf("%d %d",even,odd);
    return 0;
}
     