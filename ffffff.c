#include <stdio.h>

int main() {
  // Read the input values
  int n, m, a, b;
  scanf("%d %d %d %d", &n, &m, &a, &b);

  // Calculate the minimum cost
  int cost = 0;
  if (a * m <= b) {
    // It is cheaper to buy one ride tickets
    cost = n * a;
  } else {
    // It is cheaper to buy m ride tickets
    cost = (n / m) * b; // The cost of buying full m ride tickets
    if (n % m != 0) {
      // There are some rides left
      if ((n % m) * a <= b) {
        // It is cheaper to buy one ride tickets for the remaining rides
        cost += (n % m) * a;
      } else {
        // It is cheaper to buy one more m ride ticket
        cost += b;
      }
    }
  }

  // Print the output
  printf("%d\n", cost);
  return 0;
}
