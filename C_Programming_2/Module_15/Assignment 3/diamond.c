#include <stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= (2*i-1); k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    for (i = n-1; i >= 1; i--) {
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= (2*i-1); k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}