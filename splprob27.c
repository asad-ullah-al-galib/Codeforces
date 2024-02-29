
#include <stdio.h>
#include <stdlib.h>

// Define the structure
typedef struct {
    int day, month, year;
} Date;

// Function to calculate the number of days between two dates
int calculateDifference(Date dt1, Date dt2) {
    // arrays to store the number of days in each month
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // count the number of days before dt1

    // initialize count using years and day
    long int n1 = dt1.year * 365 + dt1.day;

    // add days for months gone by
    for (int i = 0; i < dt1.month - 1; i++)
        n1 += monthDays[i];

    // since every leap year is of 366 days,
    // add a day for every leap year
    n1 += countLeapYears(dt1);

    // similar to count1
    long int n2 = dt2.year * 365 + dt2.day;
    for (int i = 0; i < dt2.month - 1; i++)
        n2 += monthDays[i];
    n2 += countLeapYears(dt2);

    // return difference between two counts
    return (n2 - n1);
}

// This function counts the number of leap years before the given date
int countLeapYears(Date d) {
    int years = d.year;

    // check if the current year needs to be considered
    // for the count of leap years or not
    if (d.month <= 2)
        years--;

    // an year is a leap year if it is a multiple of 4,
    // multiple of 400 and not a multiple of 100.
    return years / 4 - years / 100 + years / 400;
}

int main() {
    Date dt1, dt2;

    // Input dates
    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &dt1.day, &dt1.month, &dt1.year);
    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &dt2.day, &dt2.month, &dt2.year);

    // Calculate and print the difference
    printf("Difference between two dates is %d days.\n", calculateDifference(dt1, dt2));

    return 0;
}
