
#include <stdio.h>

int main() {
    char str[200];
    int seen[26] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            if (seen[ch - 'a'] == 1) {
                printf("First repeating character: %c\n", ch);
                found = 1;
                break;
            }
            seen[ch - 'a'] = 1;
        }
    }

    if (!found) {
        printf("No repeating lowercase character\n");
    }

    return 0;
}
