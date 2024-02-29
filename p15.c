//write a program in C to count the total number of alphabets,digits and special characters in a string
#include <stdio.h>

int main() {
    char str[100];
    int i, alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alphabets++;
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else
            special++;
    }

    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d", special - 1);
    return 0;
}

