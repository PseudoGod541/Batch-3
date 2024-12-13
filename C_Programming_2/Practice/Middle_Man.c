#include <stdio.h>

int main() {
    int n, i, j, temp;
    scanf("%d", &n);
    int ages[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &ages[i]);
    }
    for (i = 0; i < n-1; i++) 
    {
        for (j = 0; j < n-i-1; j++) 
        {
            if (ages[j] > ages[j+1]) 
            {
                temp = ages[j];
                ages[j] = ages[j+1];
                ages[j+1] = temp;
            }
        }
    }
    if (n % 2 == 1) 
    {
        printf("%d ", ages[n/2]);
    } else 
    {
        printf("%d %d ", ages[n/2-1], ages[n/2]);
    }
    return 0;
}