#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        int S, A, B, C, D;
        scanf("%d %d %d %d", &S, &A, &B, &C);
        D = S - A - B - C;
        printf("%d\n", D);
    }
    return 0;
}