#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    if(n<=0)
    {
        for(i=n;i<=1;i++)
        {
            printf("%d ",i);
        }

    }
    else
    {
        for(i=1;i<=5;i++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
     