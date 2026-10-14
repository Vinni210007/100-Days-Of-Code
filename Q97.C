
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[200];
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++) {
        if (i == 0 && !isspace((unsigned char)name[i]))
            printf("%c.", name[i]);
        else if (isspace((unsigned char)name[i]) &&
                 name[i + 1] != '\0' &&
                 !isspace((unsigned char)name[i + 1]) &&
                 name[i + 1] != '\n')
            printf("%c.", name[i + 1]);
    }

    return 0;
}
