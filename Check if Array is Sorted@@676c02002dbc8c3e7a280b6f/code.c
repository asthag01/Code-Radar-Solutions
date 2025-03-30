#include <stdio.h>

int main() {
    int n;
    int isIncreasing = 1, isDecreasing = 1;
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted in increasing order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isIncreasing = 0;
            break;
        }
    }

    // Check if the array is sorted in decreasing order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            isDecreasing = 0;
            break;
        }
    }

    // Output the result based on the flags
    if (isIncreasing) {
        printf("Sorted");
    } else if (isDecreasing) {
        printf("Not Sorted");
    } else {
        printf("Array is not sorted.\n");
    }

    return 0;
}