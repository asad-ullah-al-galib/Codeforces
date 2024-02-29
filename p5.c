//write a program in C to print all the alphabets using pointer.
#include <stdio.h>

int main() {
    char alphabets[26];
    char *ptr;
    int i;

    // Storing each alphabet in the array
    for(i = 0; i < 26; i++) {
        alphabets[i] = 'A' + i;
    }

    ptr = alphabets; // Pointing to the first element of the array

    printf("Alphabets: ");
    for(i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i));
    }

    return 0;
}

