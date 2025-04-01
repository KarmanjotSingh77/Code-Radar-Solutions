#include <stdio.h>

int maxFrequencyElement(int arr[], int n) {
    int maxCount = 0;  // Store the maximum frequency count
    int maxElement = arr[0];  // Store the element with the maximum frequency
    
    for (int i = 0; i < n; i++) {
        int count = 1;  // Count for the current element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;  // Increment count if arr[i] is found again
            }
        }
        
        // Update max frequency element if a higher count is found
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    
    return maxElement;
}

int main() {
    int n;
    scanf("%d", &n);  // Input array size

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input array elements
    }

    int result = maxFrequencyElement(arr, n);  // Find the element with max frequency
    printf("%d", result);  // Output the result

    return 0;
}
