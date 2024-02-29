#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    printf("Enter a value for x between 0.1 and 2: ");
    scanf("%lf", &x);
    if (x >= 0.1 && x <= 2)
    {
        y = exp(-5 * x);
        printf("The value of y is %f\n", y);
    }
    else
    {
        printf("Invalid input. x must be between 0.1 and 2.\n");
    }
    return 0;
}

