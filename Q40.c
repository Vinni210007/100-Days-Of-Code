#include <stdio.h>

int main() {
    long long binary, complement = 0;
    long long place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    if (binary == 0) {
        printf("1's Complement = 1\n");
        return 0;
    }

    while (binary != 0) {
        digit = binary % 10;

        if (digit == 0) {
            complement = complement + 1 * place;
        }
        else if (digit == 1) {
            complement = complement + 0 * place;
        }
        else {
            printf("Invalid binary number.\n");
            return 0;
        }

        place = place * 10;
        binary = binary / 10;
    }

    printf("1's Complement = %lld\n", complement);

    return 0;
}