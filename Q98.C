
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    int i, start = 0, lastStart = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);

    while (len > 0 && isspace((unsigned char)name[len - 1]))
        name[--len] = '\0';

    for (i = 0; i < len; i++) {
        if (isspace((unsigned char)name[i]) &&
            i + 1 < len &&
            !isspace((unsigned char)name[i + 1])) {
            lastStart = i + 1;
        }
    }

    for (i = 0; i < lastStart; i++) {
        if (!isspace((unsigned char)name[i]) &&
            (i == 0 || isspace((unsigned char)name[i - 1]))) {
            printf("%c. ", name[i]);
        }
    }

    if (lastStart < len)
        printf("%s", name + lastStart);

    return 0;
}
