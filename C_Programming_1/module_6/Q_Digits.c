#include<stdio.h>
int main()
{
    int test,i,a;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf("%d",&a);
        do
       {
        printf("%d ",a%10);
        a=a/10;
       }
        while(a != 0);
        printf("\n");
    }
    return 0;
}
     