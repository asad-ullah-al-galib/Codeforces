#include <stdio.h>

void printVowels(char *str) {
    while(*str != '\0') {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            printf("%c ", *str);
        }
        str++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string
    printf("Vowels in the string are: ");
    printVowels(str);
    return 0;
}
