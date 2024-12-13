#include <stdio.h>

int main() {
    int rows;
    scanf("%d",&rows);

    // loop through rows
    for (int i = 1; i <= rows; i++) {
        
        // loop through columns for each row
        for (int j = 1; j <= rows-i+1; j++) {
            printf("*");
        }
        
        // move to next line after each row
        printf("\n");
    }

    return 0;
}