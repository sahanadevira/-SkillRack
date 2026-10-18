#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];
    int even[1000], odd[1000];
    int e = 0, o = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            even[e++] = a[i];
        else
            odd[o++] = a[i];
    }

    if (e > o) {
        for (int i = 0; i < e; i++) printf("%d ", even[i]);
        for (int i = 0; i < o; i++) printf("%d ", odd[i]);
    } else {
        for (int i = 0; i < o; i++) printf("%d ", odd[i]);
        for (int i = 0; i < e; i++) printf("%d ", even[i]);
    }

    return 0;
}
