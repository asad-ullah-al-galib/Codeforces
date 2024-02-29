#include <stdio.h>

int main() {
    char start;
    printf("Enter the starting alphabet (lowercase): ");
    scanf(" %c", &start);

    if(start < 'a' || start > 'z') {
        printf("Invalid input. Please enter a lowercase alphabet.\n");
        return 1;
    }

    char *ptr = &start;
    while(*ptr <= 'z') {
        printf("%c ", *ptr);
        (*ptr)++;
    }

    return 0;
}

