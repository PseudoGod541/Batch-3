#include <stdio.h>

int largest_number() {
    int n, largest = 0;

    for(int i=0; i<5; i++) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if(n > largest) {
            largest = n;
        }
    }

    return largest;
}

int main() {
    int max_num = largest_number();

    printf("The largest number is %d\n", max_num);

    return 0;
}