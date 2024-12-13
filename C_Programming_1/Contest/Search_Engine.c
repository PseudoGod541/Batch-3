#include <stdio.h>

int main() 
{
    int T, N, S, i, j;
    scanf("%d", &T);
    for (i = 1; i <= T; i++) 
    {
        scanf("%d", &N);
        int numbers[N];
        for (j = 0; j < N; j++) 
        {
            scanf("%d", &numbers[j]);
        }
        scanf("%d", &S);
        int position = -1;
        for (j = 0; j < N; j++) 
        {
            if (numbers[j] == S) 
            {
                position = j + 1;
                break;
            }
        }
        printf("Case %d: ", i);
        if (position == -1) {
            printf("Not Found\n");
        }
         else 
         {
            printf("%d\n", position);
        }
    }

    return 0;
}