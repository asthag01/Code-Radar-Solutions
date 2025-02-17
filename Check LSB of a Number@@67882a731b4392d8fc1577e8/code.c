#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Check LSB using bitwise AND
    if (num & 1) {
        printf("Set\n.", num);
    } else {
        printf("Not Set\n", num);
    }

    return 0;
}