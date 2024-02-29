//write a program in C to print all unique element in an array.
#include <stdio.h>

int main() {
    int arr[100], n, i, j, count;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements: ");
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}

