#include <stdio.h>

int main() {
    int a[100][100], r, c, i, j;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r + c - 1; i++) {
        for (j = 0; j < c; j++) {
            int x = i - j;

            if (x >= 0 && x < r)
                printf("%d ", a[x][j]);
        }
    }

    return 0;
}