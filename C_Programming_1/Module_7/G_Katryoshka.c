#include <stdio.h>

int main() {
    int n, m, k;
    scanf("%d %d %d",&n,&m,&k);

    int katryoshkas_1, katryoshkas_2, katryoshkas_3;

    
    if (n / 2 < k) {
        katryoshkas_1 = n / 2;
    } else {
        katryoshkas_1 = k;
    }

    if (n / 2 < m && n / 2 < k) {
        katryoshkas_2 = n / 2;
    } else if (m < k) {
        katryoshkas_2 = m;
    } else {
        katryoshkas_2 = k;
    }

    if (n < m && n < k) {
        katryoshkas_3 = n;
    } else if (m < k) {
        katryoshkas_3 = m;
    } else {
        katryoshkas_3 = k;
    }

    
    int max_katryoshkas;
    if (katryoshkas_1 < katryoshkas_2) {
        max_katryoshkas = katryoshkas_1;
    } else {
        max_katryoshkas = katryoshkas_2;
    }

    if (max_katryoshkas > katryoshkas_3) {
        max_katryoshkas = katryoshkas_3;
    }

    printf("%d\n", max_katryoshkas);

    return 0;
}