#include <stdio.h>
int main() {
    int a[10][10], n, i, j, sum = 0;

    // Input order of square matrix
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find diagonal sum
    for (i = 0; i < n; i++) {
        sum += a[i][i];
    }

    // Display result
    printf("Sum of principal diagonal elements = %d\n", sum);
    return 0;
}