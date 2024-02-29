// matrix row col sum
#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int matrix[m][n], rowSum[m], colSum[n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Sum of rows: ");
    for(i = 0; i < m; i++) {
        rowSum[i] = 0;
        for(j = 0; j < n; j++) {
            rowSum[i] += matrix[i][j];
        }
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    printf("Sum of columns: ");
    for(j = 0; j < n; j++) {
        colSum[j] = 0;
        for(i = 0; i < m; i++) {
            colSum[j] += matrix[i][j];
        }
        printf("%d ", colSum[j]);
    }
    printf("\n");

    return 0;
}


