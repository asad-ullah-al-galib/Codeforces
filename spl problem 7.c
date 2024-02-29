#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the array
    arr = (int*) malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    // Initialize max to the first element of the array
    max = *arr;

    // Traverse the array to find the largest element
    for(i = 1; i < n; i++) {
        if(*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    printf("The largest number is: %d\n", max);

    // Deallocate the memory
    free(arr);

    return 0;
}

