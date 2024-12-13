#include<stdio.h>
int main()
{
    int n,a[1000],b,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
        sum++;
    }
    printf("%d",sum);

    return 0;
}
     