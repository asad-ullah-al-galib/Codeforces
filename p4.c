//write a program in C to store n element in an array and print the element using pointer
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr; // Pointing to the first element of the array

    printf("Array elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}

