#include <stdio.h>

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            // year is divisible by 400, hence the year is a leap year
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if(isLeapYear(year)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

