#include <stdio.h>

int count_before_zero(int arr[], int size) {
    int i, count = 0;
    for (i = 0; i < size; i++) {
        if (arr[i] == 0) {
            break;
        }
        count++;
    }
    return count;
}

int main() {
    int size, i;
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int count = count_before_zero(arr, size);
    printf("%d", count);
    return 0;
}