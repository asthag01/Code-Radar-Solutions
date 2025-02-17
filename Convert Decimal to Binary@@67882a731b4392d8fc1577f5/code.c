#include <stdio.h>

int main() {
    int num, binary[32]; // Array to store binary digits (max 32 bits)
    int i = 0; // Index for the binary array

    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    if (num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    while (num > 0) {
        binary[i] = num % 2; 
        num = num / 2;       
        i++;
    }

    printf("");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}