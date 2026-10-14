#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n = 9, k = 3;

    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }

        printf("%d", max);
        if (i < n - k)
            printf(" ");
    }

    printf("\n");
    return 0;
}