#include <stdio.h>
// A function that returns the number of points of an arrow at a given position
int getPoints(int x, int y) {
  // The distance from the center of the target
  int dist = (x - 4) * (x - 4) + (y - 4) * (y - 4);
  // The radius of each ring
  int r[] = {25, 16, 9, 4, 1};
  // The point value of each ring
  int p[] = {1, 2, 3, 4, 5};
  // Loop through each ring from the outermost to the innermost
  for (int i = 0; i < 5; i++) {
    // If the distance is less than or equal to the radius, return the point value
    if (dist <= r[i]) return p[i];
  }
  // Otherwise, return zero
  return 0;
}

// The main function that reads the input and prints the output
int main() {
  int t; // The number of test cases
  scanf("%d", &t); // Read the number of test cases
  // Loop through each test case
  while (t--) {
    char grid[10][11]; // The grid of characters representing the target and the arrows
    int total = 0; // The total number of points
    // Loop through each row of the grid
    for (int i = 0; i < 10; i++) {
      scanf("%s", grid[i]); // Read the row as a string
      // Loop through each column of the grid
      for (int j = 0; j < 10; j++) {
        // If there is an arrow at this position, add its points to the total
        if (grid[i][j] == 'X') total += getPoints(i, j);
      }
    }
    printf("%d\n", total); // Print the output
  }
  return 0;
}
