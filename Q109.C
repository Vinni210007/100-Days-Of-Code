#include <stdio.h>

int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = 9, k = 4;
    int sum = 0, maxSum;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    maxSum = sum;

    for (int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d\n", maxSum);
    return 0;
}