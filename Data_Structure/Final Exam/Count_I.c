#include<stdio.h>

int main()
{
    int n; scanf("%d",&n);
    int arr[n];
    int even=0,odd=0;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else if(arr[i]%2!=0){
            odd++;
        }
    }
    
    printf("%d %d",even,odd);
    return 0;
}