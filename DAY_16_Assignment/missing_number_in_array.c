#include <stdio.h>
int main() {
    int n, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements (from 1 to %d with one missing):\n", n - 1, n);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;

    for(i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    printf("Missing number = %d\n", totalSum - arraySum);
    return 0;
}