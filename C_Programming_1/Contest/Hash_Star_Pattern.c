#include <stdio.h>

int main() 
{
    int N, i, j;
    scanf("%d", &N);
    if (N % 2 == 0) 
    {
        return 0;
    }
    for (i = 0; i < N; i++) 
    {
        if (i == N / 2) 
        {
            for (j = 0; j < N; j++) 
            {
                printf("#");
            }
        } 
        else 
        {
            for (j = 0; j < (N - 1) / 2; j++) 
            {
                printf("*");
            }
            printf("#");
            for (j = 0; j < (N - 1) / 2; j++) 
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}