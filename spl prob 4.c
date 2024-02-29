#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Function to find the smallest missing number
int findSmallestMissingNumber(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);

    int i;
    for(i = 0; i < n; i++) {
        if(arr[i] != i+1)
            return i+1;
    }
    return i+1;
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missingNumber = findSmallestMissingNumber(arr, n);
    printf("The smallest missing number is: %d\n", missingNumber);

    return 0;
}
#include <stdio.h>

// Function to find the smallest missing number
int findSmallestMissingNumber(int arr[], int n) {
    int i;

    // Initialize a boolean array to mark the present elements
    int present[n+1];
    for(i = 0; i <= n; i++) {
        present[i] = 0;
    }

    // Mark the elements present in the array
    for(i = 0; i < n; i++) {
        if(arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = 1;
        }
    }

    // Find the first element which is not marked which will be the smallest missing number
    for(i = 1; i <= n; i++) {
        if(present[i] == 0) {
            return i;
        }
    }

    // If all the numbers from 1 to n are present, then the smallest missing number is n+1
    return n+1;
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missingNumber = findSmallestMissingNumber(arr, n);
    printf("The smallest missing number is: %d\n", missingNumber);

    return 0;
}

