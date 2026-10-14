
#include <stdio.h>
#include <ctype.h>

int main() {
    char a[200], b[200];
    int count[256] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    for (i = 0; a[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)a[i];

        if (!isspace(ch)) {
            count[tolower(ch)]++;
        }
    }

    for (i = 0; b[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)b[i];

        if (!isspace(ch)) {
            count[tolower(ch)]--;
        }
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams\n");
    else
        printf("Not Anagrams\n");

    return 0;
}
