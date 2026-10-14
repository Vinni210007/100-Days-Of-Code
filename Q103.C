#include <stdio.h>

int main() {
    int nums[] = {1, 7, 3, 6, 5, 6};
    int n = 6, total = 0, left = 0;

    for (int i = 0; i < n; i++)
        total += nums[i];

    for (int i = 0; i < n; i++) {
        if (left == total - left - nums[i]) {
            printf("%d\n", i);
            return 0;
        }
        left += nums[i];
    }

    printf("-1\n");
    return 0;
}