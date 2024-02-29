#include <stdio.h>
#include <string.h>

// Function to add 1 to a large number represented as a string
void addOne(char* str) {
    int len = strlen(str), carry = 1, i;

    for(i = len - 1; i >= 0; i--) {
        int digit = str[i] - '0';
        digit += carry;
        carry = digit / 10;
        digit %= 10;
        str[i] = digit + '0';
    }

    if(carry) {
        printf("1%s\n", str);
    } else {
        printf("%s\n", str);
    }
}

int main() {
    char str[1000];
    printf("Enter a large number: ");
    scanf("%s", str);

    printf("The number after adding 1 is: ");
    addOne(str);

    return 0;
}

