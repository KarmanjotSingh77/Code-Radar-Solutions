// Your code here...
#include <stdio.h>

// Function to reverse the array between start and end
void rev(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;  // Fix: Decrement 'end' instead of incrementing
    }
}

// Function to rotate the array by 'k' elements
void rot(int arr[], int n, int k) {
    k = k % n; // In case 'k' is greater than 'n'
    rev(arr, 0, n - 1);     // Reverse the entire array
    rev(arr, 0, k - 1);     // Reverse the first 'k' elements
    rev(arr, k, n - 1);     // Reverse the remaining 'n-k' elements
}

int main() {
    int n, k;
    scanf("%d", &n);  // Input array size

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input array elements
    }

    scanf("%d", &k);  // Input the number of rotations

    rot(arr, n, k);  // Call the rotation function

    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);  // Output the rotated array
    }

    return 0;
}
