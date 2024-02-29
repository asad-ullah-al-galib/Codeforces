//write a program in C to read n number of values in an array and display them in reverse order
#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements in reverse order: ");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

