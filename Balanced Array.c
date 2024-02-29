#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// A function to check if a set is equal to the union of some other sets
bool is_equal_to_union(int set[], int size, int sets[][51], int n) {
  // A boolean array to mark the elements present in the union
  bool union_elements[51] = {false};

  // Loop for each set
  for (int i = 0; i < n; i++) {
    // Loop for each element in the set
    for (int j = 1; j <= sets[i][0]; j++) {
      // Mark the element as present in the union
      union_elements[sets[i][j]] = true;
    }
  }

  // Loop for each element in the set
  for (int i = 0; i < size; i++) {
    // If the element is not present in the union, return false
    if (!union_elements[set[i]]) {
      return false;
    }
  }

  // Return true if all elements are present in the union
  return true;
}

// A function to find the maximum number of elements in an attainable set
int max_attainable(int sets[][51], int n) {
  // Initialize the maximum number of elements and the total number of elements
  int max_elements = 0;
  int total_elements = 0;

  // A boolean array to mark the elements present in the total union
  bool total_union[51] = {false};

  // Loop for each set
  for (int i = 0; i < n; i++) {
    // Loop for each element in the set
    for (int j = 1; j <= sets[i][0]; j++) {
      // Mark the element as present in the total union and increment the total number of elements
      if (!total_union[sets[i][j]]) {
        total_union[sets[i][j]] = true;
        total_elements++;
      }
    }
  }

  // Loop for each possible subset size from 1 to total number of elements
  for (int k = 1; k <= total_elements; k++) {
    // A temporary array to store the subset elements
    int subset[k];
    // A variable to track the current index of the subset array
    int index = 0;
    // A variable to track the current element to be added to the subset array
    int element = 1;

    // Loop until all possible subsets are generated
    while (index >= 0) {
      // If the index is equal to the subset size, check if it is attainable and update the maximum number of elements
      if (index == k) {
        if (is_equal_to_union(subset, k, sets, n)) {
          if (k > max_elements) {
            max_elements = k;
          }
        }
        // Decrement the index and increment the element
        index--;
        element = subset[index] + 1;
      }
      // If the element is greater than the maximum possible element, decrement the index and increment the element
      else if (element > total_elements) {
        index--;
        element = subset[index] + 1;
      }
      // Otherwise, add the element to the subset array and increment the index and element
      else {
        subset[index] = element;
        index++;
        element++;
      }
    }
  }

  // Return the maximum number of elements
  return max_elements;
}

// A function to print a set of integers
void print_set(int set[], int size) {
  printf("{");
  for (int i = 0; i < size; i++) {
    printf("%d", set[i]);
    if (i < size - 1) {
      printf(", ");
    }
  }
  printf("}\n");
}

// The main function
int main() {
  // The number of test cases
  int t;
  scanf("%d", &t);

  // Loop for each test case
  for (int k = 0; k < t; k++) {
    // The number of sets in the deck
    int n;
    scanf("%d", &n);

    // The array of sets, where each row represents a set and its first element is its size
    int sets[n][51];

    // Loop for each set
    for (int i = 0; i < n; i++) {
      // Scan and store the size of the set
      scanf("%d", &sets[i][0]);

      // Scan and store the elements of the set in ascending order
      for (int j = 1; j <= sets[i][0]; j++) {
        scanf("%d", &sets[i][j]);
      }
    }

    // Print the array of sets
    printf("The deck of sets is: \n");
    for (int i = 0; i < n; i++) {
      print_set(sets[i] + 1, sets[i][0]);
    }

    // Find and print the maximum number of elements in an attainable set
    int max_elements = max_attainable(sets, n);
    printf("%d\n", max_elements);
  }

  return 0;
}
