#include <stdio.h>

int main() {
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int result = 0;
    if (a + b + c == d) {
        result = 1;
    }
    else if (a + b - c == d) {
        result = 1;
    }
    else if (a - b + c == d) {
        result = 1;
    }
    else if (a - b - c == d) {
        result = 1;
    }
    else if (a * b + c == d) {
        result = 1;
    }
    else if (a * b - c == d) {
        result = 1;
    }
    else if(a + b * c == d){
        result = 1;
    }

    
    if (result == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}