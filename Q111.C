#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid window size");
        return 0;
    }

    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0;

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                break;
            }
        }

        printf("%d", firstNegative);

        if (i < n - k) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}