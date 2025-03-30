#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    // If the array has only one element, that element is a peak.
    if (n == 1) {
        return arr[0];
    }

    // Check if the first element is a peak
    if (arr[0] > arr[1]) {
        return arr[0];
    }

    // Check for the peak element in the middle of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }

    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    // Return -1 if no peak is found (although this case won't occur if the array has at least 1 peak)
    return -1;
}

int main() {
    int n;

    // Input the size of the array
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the first peak element
    int peak = findFirstPeak(arr, n);
    if (peak != -1) {
        printf("%d\n", peak);
    } else {
        printf("No peak element found.\n");
    }

    return 0;
}