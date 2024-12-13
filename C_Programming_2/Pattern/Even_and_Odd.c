#include<stdio.h>
int main()
{
    int n,evenSum=0,oddSum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a[n];
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            evenSum=evenSum+a[i];
        }
        else{
            oddSum=oddSum+a[i];
        }

    }
    printf("%d %d",evenSum,oddSum);

    return 0;
}
     