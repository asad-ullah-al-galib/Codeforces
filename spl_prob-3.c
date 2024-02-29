#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the integer to divide by: ");
    scanf("%d", &k);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % k == 0) count++;
    }
    printf("Number of elements in the array divisible by %d: %d\n", k, count);
    return 0;
}

