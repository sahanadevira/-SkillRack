#include <stdio.h>

int main() {
    int n, a[1000], max = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        int d = a[i] % 10;
        if (d < 0) d = -d;
        if (d > max) max = d;
    }
    int first = 1;
    for (int i = 0; i < n; i++) {
        int d = a[i] % 10;
        if (d < 0) d = -d;
        if (d == max) {
            if (!first) printf(" ");
            printf("%d", a[i]);
            first = 0;
        }
    }
    return 0;
}
