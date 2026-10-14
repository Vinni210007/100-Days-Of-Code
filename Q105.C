#include <stdio.h>

int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7, candidate = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = nums[i];

        if (nums[i] == candidate)
            count++;
        else
            count--;
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}