#include <stdio.h>

int main() {
    int n = 8;
    int x = -1;

    for (int i = 1; i <= n; i++) {
        if (i * (i + 1) / 2 ==
            n * (n + 1) / 2 - (i - 1) * i / 2) {
            x = i;
            break;
        }
    }

    printf("%d\n", x);
    return 0;
}