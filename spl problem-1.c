#include <stdio.h>

int maxSubArraySum(int a[], int size) {
    int max_so_far = a[0];
    int curr_max = a[0];

    for (int i = 1; i < size; i++) {
        curr_max = (a[i] > curr_max + a[i]) ? a[i] : curr_max + a[i];
        max_so_far = (max_so_far > curr_max) ? max_so_far : curr_max;
    }

    return max_so_far;
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
    int max_sum = maxSubArraySum(a, n);
    printf("Maximum contiguous sum is %d\n", max_sum);
    return 0;
}
