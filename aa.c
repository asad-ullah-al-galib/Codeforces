#include <stdio.h>

int count_unique_elements(int arr[], int n) {
    int i, j, count = 0;

    for(i = 0; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                break;
            }
        }

        // If no duplicate element is found, increment the count
        if(i == j) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 3, 1, 2, 3, 1, 2, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int unique_count = count_unique_elements(arr, n);

    printf("The number of unique elements is %d\n", unique_count); // This will print: The number of unique elements is 2

    return 0;
}
