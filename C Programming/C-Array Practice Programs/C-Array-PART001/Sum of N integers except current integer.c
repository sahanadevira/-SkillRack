#include <stdio.h>
int main() {
    int n, a[100], s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    for (int i = 0; i < n; i++)
        printf("%d ", s - a[i]);
    return 0;
}
