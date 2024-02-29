#include <stdio.h>

// Function to add two numbers using call by reference
void add(int* a, int* b, int* sum) {
    *sum = *a + *b;
}

int main() {
    int a, b, sum;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Call the add function
    add(&a, &b, &sum);

    printf("The sum is: %d\n", sum);

    return 0;
}

