#include <stdio.h>
int main() {
    int arr[] = {1, 0, 2, 0, 3, 4, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0;

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill the remaining positions with zeroes
    while (j < n) {
        arr[j] = 0;
        j++;
    }

    // Print the modified array
    printf("Array after moving zeroes to the end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
   return 0;
}