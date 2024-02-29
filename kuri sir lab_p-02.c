#include <stdio.h>
#include <math.h>

double f(double x) {
  return 5 * pow(x, 2) + 3 * x - 2;
}

int main() {

  double x, y;

  printf("Enter x between 0.1 and 2: ");

  scanf("%lf", &x);
  if (x > 0.1 && x < 2) {

    y = f(x);

    printf("x = %.2f, y = %.2f\n", x, y);
  }
  else {

    printf("Invalid input. x must be between 0.1 and 2.\n");
  }
  return 0;
}
