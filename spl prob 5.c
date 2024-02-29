#include <stdio.h>

// Function to push zeros to the end of the array
void pushZerosToEnd(int arr[], int n) {
    int count = 0;  // Count of non-zero elements

    // Traverse the array. If an element is non-zero, then
    // replace the element at the 'count' position with this element
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];  // Here, 'count' is incremented
        }
    }

    // Now all non-zero elements have been shifted to the front and the 'count' is set as the index of the first 0.
    // Make all elements 0 from the count to the end.
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    pushZerosToEnd(arr, n);
    printf("Array after pushing all zeros to the end of the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

