
#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200], temp[400];

    scanf("%199s %199s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("Not rotation");
    } else {
        strcpy(temp, a);
        strcat(temp, a);

        if (strstr(temp, b) != NULL)
            printf("Rotation");
        else
            printf("Not rotation");
    }

    return 0;
}
