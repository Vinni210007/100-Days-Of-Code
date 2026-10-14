
#include <stdio.h>

int main() {
    int dd, mm, yyyy;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm == 4)
        printf("%02d-Apr-%04d\n", dd, yyyy);
    else
        printf("Date is not in April\n");

    return 0;
}
