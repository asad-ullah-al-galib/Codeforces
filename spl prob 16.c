#include <stdio.h>
#include <ctype.h>

void countCharacters(char* str, int* upper, int* lower, int* number, int* special) {
    int i = 0;
    while (str[i] != '\0') {
        if (isupper((unsigned char)str[i]))
            (*upper)++;
        else if (islower((unsigned char)str[i]))
            (*lower)++;
        else if (isdigit((unsigned char)str[i]))
            (*number)++;
        else
            (*special)++;
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string

    int upper = 0, lower = 0, number = 0, special = 0;
    countCharacters(str, &upper, &lower, &number, &special);

    printf("Upper case letters : %d\n", upper);
    printf("Lower case letters : %d\n", lower);
    printf("Numbers : %d\n", number);
    printf("Special characters : %d\n", special);

    return 0;
}

