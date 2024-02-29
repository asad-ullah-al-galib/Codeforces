//write a program in C to count the total number of words in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ')
            count++;
    }

    printf("Total number of words: %d", count + 1); // Add 1 to include the first word

    return 0;
}

