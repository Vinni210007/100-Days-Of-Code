#include <stdio.h>

int main() {
    int n, i, element, pos = -1;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (a[i] == element) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("-1");
    }
    else {
        for (i = pos; i < n - 1; i++)
            a[i] = a[i + 1];

        for (i = 0; i < n - 1; i++)
            printf("%d ", a[i]);
    }

    return 0;
}