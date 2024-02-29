#include <stdio.h>
#include <stdlib.h>

// A function that returns an array of size n that satisfies the condition
int* construct_array(int n) {
  // A pointer that allocates memory for the array
  int* a = malloc(n * sizeof(int));
  // A loop that fills the array with odd numbers starting from 1
  for (int i = 0; i < n; i++) {
    a[i] = 2 * i + 1;
  }
  // Return the array
  return a;
}

int main() {
  // A variable that stores the number of test cases
  int t;
  // Read the number of test cases from the standard input
  scanf("%d", &t);
  // A loop that iterates over each test case
  while (t--) {
    // A variable that stores the number of elements in the array
    int n;
    // Read n from the standard input
    scanf("%d", &n);
    // Call the function construct_array and store its result in a pointer
    int* a = construct_array(n);
    // A loop that prints the elements of the array to the standard output
    for (int i = 0; i < n; i++) {
      printf("%d ", a[i]);
    }
    // Print a newline after each test case
    printf("\n");
    // Free the memory allocated for the array
    free(a);
  }
  return 0;
}
