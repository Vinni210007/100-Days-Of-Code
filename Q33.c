#include <stdio.h>
#include <math.h>

int main() {
    int num, original, temp, digits = 0;
    int remainder;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    if (num == 0) {
        digits = 1;
    } else {
        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }
    }

    temp = num;

    while (temp != 0) {
        remainder = temp % 10;
        sum = sum + (int)pow(remainder, digits);
        temp = temp / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }

    return 0;
}