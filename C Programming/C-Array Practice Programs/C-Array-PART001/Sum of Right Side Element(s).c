#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[10000];
    long long total = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }
    long long prefix = 0;
    for (int i = 0; i < n; i++) {
        prefix += a[i];
        printf("%lld", total - prefix);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
