//write a program in C to print individual characters of a string in reverse order
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string

    length = strlen(str) - 1;  // Subtract 1 to exclude the newline character added by fgets

    printf("String in reverse order: ");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

