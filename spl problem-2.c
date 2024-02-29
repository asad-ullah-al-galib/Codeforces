#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(IsPrime(a[i])) count++;
    }
    printf("Number of prime numbers in the array: %d\n", count);
    return 0;
}
