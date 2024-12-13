#include <stdio.h>

int main() {
    int N,marks[1000],i,highest = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++) 
    {
        scanf("%d", &marks[i]);
        if(marks[i] > highest) 
        {
            highest = marks[i];
        }
    }
    for (i = 0; i < N; i++) 
    {
        int difference = highest - marks[i];
        printf("%d ", difference);
    }
    printf("\n");

    return 0;
}