#include <stdio.h>

int main() {
    int n, i, j, t, k = 0;
    int a[50], e[50];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            e[k++] = a[i];
    }

    // sort evens in descending order
    for (i = 0; i < k - 1; i++) {
        for (j = i + 1; j < k; j++) {
            if (e[i] < e[j]) {
                t = e[i];
                e[i] = e[j];
                e[j] = t;
            }
        }
    }

    for (i = 0; i < k; i++)
        printf("%d ", e[i]);

    return 0;
}
