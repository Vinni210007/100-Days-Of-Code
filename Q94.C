
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[300];
    char longest[300] = "";
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        while (str[i] != '\0' &&
               isspace((unsigned char)str[i])) {
            i++;
        }

        if (str[i] == '\0')
            break;

        j = 0;

        while (str[i] != '\0' &&
               !isspace((unsigned char)str[i])) {
            if (j < 299)
                longest[j] = str[i];
            j++;
            i++;
        }

        if (j > max) {
            max = j;
            longest[j] = '\0';
        }
    }

    if (max > 0)
        printf("Longest word: %s\n", longest);
    else
        printf("No word found\n");

    return 0;
}
