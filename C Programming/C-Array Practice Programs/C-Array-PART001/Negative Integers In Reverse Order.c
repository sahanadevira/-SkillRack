#include <stdio.h>

int main() {
    int n, i, found = 0;
    int a[50];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = n - 1; i >= 0; i--) {
        if (a[i] < 0) {
            printf("%d ", a[i]);
            found = 1;
        }
    }
    if (!found)
        printf("-1");
    return 0;
}
