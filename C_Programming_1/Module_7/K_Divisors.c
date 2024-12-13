#include<stdio.h>
int main()
{
    int n,k,j;
    scanf("%d",&n);
    k=n%10;
    j=n/10;
    if(k%j==0||j%k==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}
     