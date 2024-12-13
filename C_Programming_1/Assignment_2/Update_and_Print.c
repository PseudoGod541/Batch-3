#include<stdio.h>
int main()
{
    int n,x,v,i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &x, &v);
    arr[x] = v;

    for (i = n-1; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
     