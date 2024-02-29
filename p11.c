//write a program in C to input a string and print it.
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string

    printf("You entered: %s", str);

    return 0;
}

