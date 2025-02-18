#include <stdio.h>

int main() {
    int num, root;

    scanf("%d", &num);

    root = (int)sqrt(num); // Calculate the integer square root

    if (root * root == num) {
        printf("Yes", num);
    } else {
        printf("No", num);
    }

    return 0;
}