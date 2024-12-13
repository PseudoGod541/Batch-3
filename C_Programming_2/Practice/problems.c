#include <stdio.h>

int main() {
    int num, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    printf("Fibonacci series up to %d terms:\n", num);
    while (num > 0) {
        if (num == 1) {
            printf("%d\n", first);
        } else {
            printf("%d, ", first);
            next = first + second;
            first = second;
            second = next;
        }
        num--;
    }
    return 0;
}













