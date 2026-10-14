#include <stdio.h>

int main() {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int n = 7, x = 5;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }

    printf("%d\n", index);
    return 0;
}