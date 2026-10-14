#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 4};
    int n = 4;

    for (int i = 0; i < n; i++) {
        int previous = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previous = arr[j];
                break;
            }
        }

        printf("%d", previous);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}