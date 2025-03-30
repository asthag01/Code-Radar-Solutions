#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n;  // Handle k > n
    int temp[n];
    
    // Shift elements to temp
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    
    // Copy temp back to arr
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    
    rotateArray(arr, n, k);
    printf("Rotated array: ");
    printArray(arr, n);
    
    return 0;
}
