#include<stdio.h>
int main()
{
    int n,a,b;
    int tiger=0,pathan=0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            tiger++;
        }
        else if(a<b)
        {
            pathan++;
        }
    }
    if(tiger>pathan)
    {
        printf("Tiger");
    }
    else if(pathan>tiger)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}
     