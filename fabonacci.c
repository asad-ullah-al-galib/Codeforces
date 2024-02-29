#include <stdio.h>

// A function to print the Fibonacci series up to n
void printFibonacci(int n) {
  // Initialize the first two numbers
  int a = 0;
  int b = 1;

  // Print the first two numbers
  printf("%d %d ", a, b);

  // Loop until the next number is greater than n
  while (a + b <= n) {
    // Calculate the next number
    int c = a + b;

    // Print the next number
    printf("%d ", c);

    // Update the previous two numbers
    a = b;
    b = c;
  }

  // Print a new line
  printf("\n");
}

// The main function
int main() {
  // Declare a variable to store the limit
  int limit;

  // Ask the user to enter the limit
  printf("Enter the limit: ");

  // Read the limit from the user
  scanf("%d", &limit);

  // Call the function to print the Fibonacci series
  printFibonacci(limit);

  // Return 0 to indicate successful termination
  return 0;
}

