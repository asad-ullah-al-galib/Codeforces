//write a program in C to find the length of a string without using library function
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string

    while(str[i] != '\0') {
        length++;
        i++;
    }

    printf("Length of the string: %d", length - 1); // Subtract 1 to exclude the newline character added by fgets

    return 0;
}

